library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use STD.textio.all;
use ieee.std_logic_arith.ALL;

entity write_file is
	Port(d : in std_logic_vector(3 downto 0));
end write_file;

architecture Behavioral of write_file is

begin

	writing : process
		file file_pointer : text;
		variable line_content : string(1 to 4);
		variable bin_value : std_logic_vector(3 downto 0);
		variable line_num : line;
		variable i, j : integer := 0;
		variable char : character := '0';
	begin 
		-- Open file for writing
		file_open(file_pointer, "write.txt", WRITE_MODE);
		--for i in 0 to 15 loop
			bin_value := d;--conv_std_logic_vector(d,4);
			for j in 0 to 3 loop
				if (bin_value(j) = '0') then
					line_content(4-j) := '0';
				else
					line_content(4-j) := '1';
				end if;
			end loop;
			write(line_num, line_content); -- write each line
			writeline(file_pointer, line_num);
			wait for 10 ns;
		--end loop;
		file_close(file_pointer);
		wait;
	end process writing;
end Behavioral;

