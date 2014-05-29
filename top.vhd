----------------------------------------------------------------------------------
-- Create Date:    10:07:10 05/29/2010 
-- A simple VHDL-code for reading and writing files
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity top is
	Port(clk : in std_logic;
		  rst : in std_logic;
		  d : in std_logic_vector(3 downto 0); -- Data in
		  q : out std_logic_vector(3 downto 0) -- Data out
		  );
end top;

architecture Behavioral of top is
	
	signal tmp : std_logic_vector(3 downto 0);

begin
	
	tmp <= d;
	q <= tmp;
	
end Behavioral;

