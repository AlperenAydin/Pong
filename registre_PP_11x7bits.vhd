----------------------------------------------------------------------------------
-- Engineer: AYDIN Alperen / COTTE Lesly
-- 
-- Create Date:    11:36:35 03/20/2015 
-- Design Name: 
-- Module Name:    registre_PP_11x7bits - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity registre_PP_11x7bits is
    Port ( D   : in  STD_LOGIC_VECTOR (10 downto 0);
           CE2 : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           Q   : out STD_LOGIC_VECTOR (7 downto 0));
end registre_PP_11x7bits;

architecture Behavioral of registre_PP_11x7bits is

begin

FFD_10bit: process(CLK,CE2)
begin
	if( CE2='1' AND rising_edge(CLK)) then
		Q <= D (9 downto 2);
	end if;
end process;

end Behavioral;

