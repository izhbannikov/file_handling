-- TestBench Template 

  LIBRARY ieee;
  USE ieee.std_logic_1164.ALL;
  USE ieee.numeric_std.ALL;
  use STD.textio.all;

  ENTITY tb IS
  END tb;

  ARCHITECTURE behavior OF tb IS 

	 -- Component Declaration for the Unit Under Test (UUT)
	 COMPONENT top
    PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
			d : in std_logic_vector(3 downto 0);
			q : out std_logic_vector(3 downto 0)
			);
    END COMPONENT;
	 
	 --Inputs
  signal clk : std_logic := '0';
  signal rst : std_logic := '0';
  signal data_in : std_logic_vector(3 downto 0) := "0000";
  signal data_out : std_logic_vector(3 downto 0) := "0000";
  
  -- Clock period definitions
  constant clk_period : time := 10 ns;
  constant SIM_TIME : time := 100 ns;

  BEGIN

  -- Instantiate the Unit Under Test (UUT)
   uut: top PORT MAP (
          clk => clk,
          rst => rst,
			 d => data_in,
			 q => data_out
		  );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus processes
	
   read_write_proc: process
		file read_file_pointer : text;
		file write_file_pointer : text;
		variable read_line_content : string(1 to 4);
		variable read_line_num : line;
		variable write_line_content : string(1 to 4);
		variable write_line_num : line;
		variable i,j : integer := 0;
		variable read_char : character := '0';
	begin		
      file_open(read_file_pointer, "read.txt", READ_MODE); -- Open files for reading and writing
		file_open(write_file_pointer, "write.txt", WRITE_MODE);
		
		-- Open file for reading
		while not endfile(read_file_pointer) loop -- read untill the end of the file
			readline(read_file_pointer, read_line_num); -- read the whole line
			read(read_line_num, read_line_content);
			-- For each character in the line, convert it to the binary value
			-- And then store it in a signal named 'data_in':
			for i in 1 to 4 loop 
				-- Read data from the input file:
				read_char := read_line_content(i);
				if (read_char = '0') then
					data_in(4-i) <= '0';
				else
					data_in(4-i) <= '1';
				end if;
			end loop;
			wait for 10 ns; -- Wait for after reading each line
			-- Write data to the output file:
			for j in 0 to 3 loop
				if (data_out(j) = '0') then
					write_line_content(4-j) := '0';
				else
					write_line_content(4-j) := '1';
				end if;
			end loop;
			write(write_line_num, write_line_content); -- write each line
			writeline(write_file_pointer, write_line_num);
			wait for 10 ns; -- Wait for after reading each line
		end loop;
	
		file_close(read_file_pointer);	
		file_close(write_file_pointer);
		
		wait;
   end process;
		
  END;
