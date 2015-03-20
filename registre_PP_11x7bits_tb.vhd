--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:47:17 03/20/2015
-- Design Name:   
-- Module Name:   /fs02/share/users/alperen.aydin/home/TPElec/ELN1/Pong/registre_PP_11x7bits_tb.vhd
-- Project Name:  Pong
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: registre_PP_11x7bits
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
 
ENTITY registre_PP_11x7bits_tb IS
END registre_PP_11x7bits_tb;
 
ARCHITECTURE behavior OF registre_PP_11x7bits_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT registre_PP_11x7bits
    PORT(
         D : IN  std_logic_vector(10 downto 0);
         CE2 : IN  std_logic;
         CLK : IN  std_logic;
         Q : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal D : std_logic_vector(10 downto 0) := (others => '0');
   signal CE2 : std_logic := '0';
   signal CLK : std_logic := '0';

 	--Outputs
   signal Q : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: registre_PP_11x7bits PORT MAP (
          D => D,
          CE2 => CE2,
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

      wait for CLK_period*10;

      -- insert stimulus here 

      wait;
   end process;

CE2 <= 	'1',
			'0' after 70 ns;

D 	<=	"00000000000",
		"00000000001" after 10 ns,
		"00000000101" after 20 ns,
		"00101000001" after 30 ns,
		"00000000101" after 40 ns,
		"00011000001" after 50 ns,
		"00100000101" after 60 ns,
		"00000000001" after 70 ns,
		"00000000101" after 80 ns,
		"00101000001" after 90 ns,
		"00000000101" after 100 ns,
		"00011000001" after 110 ns,
		"00100000101" after 120 ns;
END;
