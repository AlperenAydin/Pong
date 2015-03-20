--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   10:26:06 03/20/2015
-- Design Name:   
-- Module Name:   /fs02/share/users/alperen.aydin/home/TPElec/ELN1/Pong/registre_SP_11bits_tb.vhd
-- Project Name:  Pong
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: registre_SP_11bits
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
ENTITY registre_SP_11bits_tb IS
END registre_SP_11bits_tb;
 
ARCHITECTURE behavior OF registre_SP_11bits_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT registre_SP_11bits
    PORT(
         D : IN  std_logic;
         CE : IN  std_logic;
         CLK : IN  std_logic;
         Q : OUT  std_logic_vector(10 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal D : std_logic := '0';
   signal CE : std_logic := '0';
   signal CLK : std_logic := '0';

 	--Outputs
   signal Q : std_logic_vector(10 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: registre_SP_11bits PORT MAP (
          D => D,
          CE => CE,
          CLK => CLK,
          Q => Q
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
		
      wait;
   end process;

	CE <= '1';
	D <= 	'0',
			'1' after 5 ns,
			'0' after 15 ns,
			'1' after 25 ns,
			'0' after 35 ns,
			'1' after 45 ns,
			'0' after 55 ns,
			'1' after 65 ns,
			'0' after 75 ns,	
			'1' after 85 ns,
			'0' after 95 ns;

END;
