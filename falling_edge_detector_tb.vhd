--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:09:12 03/20/2015
-- Design Name:   
-- Module Name:   /fs02/share/users/alperen.aydin/home/TPElec/ELN1/Pong/falling_edge_detector_tb.vhd
-- Project Name:  Pong
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: falling_edge_detector
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
 
ENTITY falling_edge_detector_tb IS
END falling_edge_detector_tb;
 
ARCHITECTURE behavior OF falling_edge_detector_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT falling_edge_detector
    PORT(
         PS2_CLK : IN  std_logic;
         CLK : IN  std_logic;
         CE1 : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal PS2_CLK : std_logic := '0';
   signal CLK : std_logic := '0';

 	--Outputs
   signal CE1 : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 1 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: falling_edge_detector PORT MAP (
          PS2_CLK => PS2_CLK,
          CLK => CLK,
          CE1 => CE1
        );

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

      wait for CLK_period*1000;

      -- insert stimulus here 

      wait;
   end process;
	
	PS2_CLK <= 	'0',
					'1' after 10 ns,
					'0' after 20 ns,
					'1' after 30 ns,
					'0' after 40 ns,
					'1' after 50 ns,
					'0' after 60 ns,
					'1' after 70 ns,
					'0' after 80 ns;

END;
