--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:10:27 03/20/2015
-- Design Name:   
-- Module Name:   /fs02/share/users/alperen.aydin/home/TPElec/ELN1/Pong/compteur_11bits_tb.vhd
-- Project Name:  Pong
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: compteur_11bits
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY compteur_11bits_tb IS
END compteur_11bits_tb;
 
ARCHITECTURE behavior OF compteur_11bits_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT compteur_11bits
    PORT(
         CE1 : IN  std_logic;
         CLK : IN  std_logic;
         onze_coups : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CE1 : std_logic := '0';
   signal CLK : std_logic := '0';

 	--Outputs
   signal onze_coups : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: compteur_11bits PORT MAP (
          CE1 => CE1,
          CLK => CLK,
          onze_coups => onze_coups
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for CLK_period*10;

      -- insert stimulus here 

      wait;
   end process;

CE2 <= 	'0'
			'1' after 10 ns,
			'0' after 20 ns,


END;
