----------------------------------------------------------------------------------
-- Engineer: AYDIN ALperen/ COTTE Lesly
-- 
-- Create Date:    09:26:48 03/20/2015 
-- Design Name: 
-- Module Name:    read_ps2 - Behavioral 
-- Project Name:   Pong
-- Target Devices: Spartan3
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


entity read_ps2 is
    Port ( GCLK      : in  STD_LOGIC;
           Reset     : in  STD_LOGIC;
           PS2_Data  : in  STD_LOGIC;
           PS2_Clk   : in  STD_LOGIC;
           serve     : out STD_LOGIC;
           left_dir  : out STD_LOGIC_VECTOR (1 downto 0);
           right_dir : out STD_LOGIC_VECTOR (1 downto 0);
           ps2_code  : out STD_LOGIC_VECTOR (7 downto 0));
end read_ps2;

architecture Behavioral of read_ps2 is

begin


end Behavioral;

