----------------------------------------------------------------------------------
-- Engineer: AYDIN/COTTE
-- 
-- Create Date:    11:54:21 03/20/2015 
-- Design Name: 
-- Module Name:    compteur_11bits - Behavioral 
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
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity compteur_11bits is
    Port ( CE1      : in  STD_LOGIC;
           CLK      : in  STD_LOGIC;
           onze_coups : out  STD_LOGIC );
end compteur_11bits;

architecture Behavioral of compteur_11bits is

signal compteur :STD_LOGIC_VECTOR (3 downto 0) := "0000";

begin
FFD_10bit: process(CLK)
begin 
	if(rising_edge(CLK) AND CE1='1') then
		compteur<= compteur + 1;
	end if;
	if (compteur = "1011") then
		compteur <= "0000";
		onze_coups <= '1';
	end if;


end process;

end Behavioral;

