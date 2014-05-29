library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use STD.textio.all;

entity read_file is
	Port( Q : out std_logic_vector(3 downto 0));
end read_file;

architecture Behavioral of read_file is

	signal bin_value : std_logic_vector(3 downto 0) := "0000";

begin

	-- Reading process
	reading : process 
		file file_pointer : text;
		variable line_content : string(1 to 4);
		variable line_num : line;
		variable j : integer := 0;
		variable char : character := '0';
	begin
		-- Open file for reading
		file_open(file_pointer, "read.txt", READ_MODE);
		while not endfile(file_pointer) loop -- read untill the end of the file
			readline(file_pointer, line_num); -- read the whole line
			read(line_num, line_content);
			-- For each character in the line, convert it to the binary value
			-- And then store it in a signal named 'bin_value':
			for j in 1 to 4 loop 
				char := line_content(j);
				if (char = '0') then
					bin_value(4-j) <= '0';
				else
					bin_value(4-j) <= '1';
				end if;
			end loop;
			wait for 10 ns; -- Wait for after reading each line
			q <= bin_value;
		end loop;
		file_close(file_pointer);
		wait;
	end process reading;
end Behavioral;

