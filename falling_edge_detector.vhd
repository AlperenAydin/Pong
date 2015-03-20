----------------------------------------------------------------------------------
-- Engineer: AYDIN Alperen/ COTTE Lesly
-- 
-- Create Date:    10:45:19 03/20/2015 
-- Design Name: 
-- Module Name:    falling_edge_detector - Behavioral 
-- Project Name:   Pong
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

entity falling_edge_detector is
    Port ( PS2_CLK : in  STD_LOGIC;
           CLK     : in  STD_LOGIC;
           CE1     : out  STD_LOGIC);
end falling_edge_detector;

architecture Behavioral of falling_edge_detector is

signal Q_pre : STD_LOGIC :='1';

begin


FFD_10bit: process(CLK)
begin
	if(rising_edge(CLK)) then 
			CE1 <= Q_pre AND (NOT PS2_CLK);
			Q_pre <= PS2_CLK;
	end if;
end process;


end Behavioral;

