----------------------------------------------------------------------------------
-- Engineer: AYDIN Alperen / COTTE Lesly
-- 
-- Create Date:    09:31:36 03/20/2015 
-- Design Name: 
-- Module Name:    registre_SP_11bits - Behavioral 
-- Project Name:   Pong
-- Target Devices:  Spartan3
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

entity registre_SP_11bits is
    Port ( D   : in  STD_LOGIC;
           CE  : in  STD_LOGIC;
           CLK : in  STD_LOGIC;
           Q   : out STD_LOGIC_VECTOR (10 downto 0));
end registre_SP_11bits;

architecture Behavioral of registre_SP_11bits is

signal Y : STD_LOGIC_VECTOR (10 downto 0) := "00000000000";

begin

FFD_10bit: process(CLK,CE)
begin
	if (CE ='1') then
		if (rising_edge(CLK))then
			for i in 0 to 9 loop
				Y(i+1) <= Y(i); 
			end loop;
			Y(0) <= D;
		end if;
	end if;
end process;
Q <= Y;
end Behavioral;

