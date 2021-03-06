/*******************************************************************************
* Filename      : usart1registers.hpp
*
* Details       : Universal synchronous asynchronous receiver transmitter. This
*                 header file is auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(USART1REGISTERS_HPP)
#define USART1REGISTERS_HPP

#include "usart1fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct USART1
{
  struct USART1SRBase {} ;

  struct SR : public RegisterBase<0x40011000, 32, ReadWriteMode>
  {
    using CTS = USART_SR_CTS_Values<USART1::SR, 9, 1, ReadWriteMode, USART1SRBase> ;
    using LBD = USART_SR_LBD_Values<USART1::SR, 8, 1, ReadWriteMode, USART1SRBase> ;
    using TXE = USART_SR_TXE_Values<USART1::SR, 7, 1, ReadMode, USART1SRBase> ;
    using TC = USART_SR_TC_Values<USART1::SR, 6, 1, ReadWriteMode, USART1SRBase> ;
    using RXNE = USART_SR_RXNE_Values<USART1::SR, 5, 1, ReadWriteMode, USART1SRBase> ;
    using IDLE = USART_SR_IDLE_Values<USART1::SR, 4, 1, ReadMode, USART1SRBase> ;
    using ORE = USART_SR_ORE_Values<USART1::SR, 3, 1, ReadMode, USART1SRBase> ;
    using NF = USART_SR_NF_Values<USART1::SR, 2, 1, ReadMode, USART1SRBase> ;
    using FE = USART_SR_FE_Values<USART1::SR, 1, 1, ReadMode, USART1SRBase> ;
    using PE = USART_SR_PE_Values<USART1::SR, 0, 1, ReadMode, USART1SRBase> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40011000, 32, ReadWriteMode, USART1SRBase, T...> ;

  struct USART1DRBase {} ;

  struct DR : public RegisterBase<0x40011004, 32, ReadWriteMode>
  {
    using DRField = USART_DR_DR_Values<USART1::DR, 0, 9, ReadWriteMode, USART1DRBase> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40011004, 32, ReadWriteMode, USART1DRBase, T...> ;

  struct USART1BRRBase {} ;

  struct BRR : public RegisterBase<0x40011008, 32, ReadWriteMode>
  {
    using DIV_Mantissa = USART_BRR_DIV_Mantissa_Values<USART1::BRR, 4, 12, ReadWriteMode, USART1BRRBase> ;
    using DIV_Fraction = USART_BRR_DIV_Fraction_Values<USART1::BRR, 0, 4, ReadWriteMode, USART1BRRBase> ;
  } ;

  template<typename... T> 
  using BRRPack  = Register<0x40011008, 32, ReadWriteMode, USART1BRRBase, T...> ;

  struct USART1CR1Base {} ;

  struct CR1 : public RegisterBase<0x4001100C, 32, ReadWriteMode>
  {
    using OVER8 = USART_CR_OVER_Values<USART1::CR1, 15, 1, ReadWriteMode, USART1CR1Base> ;
    using UE = USART_CR_UE_Values<USART1::CR1, 13, 1, ReadWriteMode, USART1CR1Base> ;
    using M = USART_CR_M_Values<USART1::CR1, 12, 1, ReadWriteMode, USART1CR1Base> ;
    using WAKE = USART_CR_WAKE_Values<USART1::CR1, 11, 1, ReadWriteMode, USART1CR1Base> ;
    using PCE = USART_CR_PCE_Values<USART1::CR1, 10, 1, ReadWriteMode, USART1CR1Base> ;
    using PS = USART_CR_PS_Values<USART1::CR1, 9, 1, ReadWriteMode, USART1CR1Base> ;
    using PEIE = USART_CR_PEIE_Values<USART1::CR1, 8, 1, ReadWriteMode, USART1CR1Base> ;
    using TXEIE = USART_CR_TXEIE_Values<USART1::CR1, 7, 1, ReadWriteMode, USART1CR1Base> ;
    using TCIE = USART_CR_TCIE_Values<USART1::CR1, 6, 1, ReadWriteMode, USART1CR1Base> ;
    using RXNEIE = USART_CR_RXNEIE_Values<USART1::CR1, 5, 1, ReadWriteMode, USART1CR1Base> ;
    using IDLEIE = USART_CR_IDLEIE_Values<USART1::CR1, 4, 1, ReadWriteMode, USART1CR1Base> ;
    using TE = USART_CR_TE_Values<USART1::CR1, 3, 1, ReadWriteMode, USART1CR1Base> ;
    using RE = USART_CR_RE_Values<USART1::CR1, 2, 1, ReadWriteMode, USART1CR1Base> ;
    using RWU = USART_CR_RWU_Values<USART1::CR1, 1, 1, ReadWriteMode, USART1CR1Base> ;
    using SBK = USART_CR_SBK_Values<USART1::CR1, 0, 1, ReadWriteMode, USART1CR1Base> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x4001100C, 32, ReadWriteMode, USART1CR1Base, T...> ;

  struct USART1CR2Base {} ;

  struct CR2 : public RegisterBase<0x40011010, 32, ReadWriteMode>
  {
    using LINEN = USART_CR_LINEN_Values<USART1::CR2, 14, 1, ReadWriteMode, USART1CR2Base> ;
    using STOP = USART_CR_STOP_Values<USART1::CR2, 12, 2, ReadWriteMode, USART1CR2Base> ;
    using CLKEN = USART_CR_CLKEN_Values<USART1::CR2, 11, 1, ReadWriteMode, USART1CR2Base> ;
    using CPOL = USART_CR_CPOL_Values<USART1::CR2, 10, 1, ReadWriteMode, USART1CR2Base> ;
    using CPHA = USART_CR_CPHA_Values<USART1::CR2, 9, 1, ReadWriteMode, USART1CR2Base> ;
    using LBCL = USART_CR_LBCL_Values<USART1::CR2, 8, 1, ReadWriteMode, USART1CR2Base> ;
    using LBDIE = USART_CR_LBDIE_Values<USART1::CR2, 6, 1, ReadWriteMode, USART1CR2Base> ;
    using LBDL = USART_CR_LBDL_Values<USART1::CR2, 5, 1, ReadWriteMode, USART1CR2Base> ;
    using ADD = USART_CR_ADD_Values<USART1::CR2, 0, 4, ReadWriteMode, USART1CR2Base> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40011010, 32, ReadWriteMode, USART1CR2Base, T...> ;

  struct USART1CR3Base {} ;

  struct CR3 : public RegisterBase<0x40011014, 32, ReadWriteMode>
  {
    using ONEBIT = USART_CR_ONEBIT_Values<USART1::CR3, 11, 1, ReadWriteMode, USART1CR3Base> ;
    using CTSIE = USART_CR_CTSIE_Values<USART1::CR3, 10, 1, ReadWriteMode, USART1CR3Base> ;
    using CTSE = USART_CR_CTSE_Values<USART1::CR3, 9, 1, ReadWriteMode, USART1CR3Base> ;
    using RTSE = USART_CR_RTSE_Values<USART1::CR3, 8, 1, ReadWriteMode, USART1CR3Base> ;
    using DMAT = USART_CR_DMAT_Values<USART1::CR3, 7, 1, ReadWriteMode, USART1CR3Base> ;
    using DMAR = USART_CR_DMAR_Values<USART1::CR3, 6, 1, ReadWriteMode, USART1CR3Base> ;
    using SCEN = USART_CR_SCEN_Values<USART1::CR3, 5, 1, ReadWriteMode, USART1CR3Base> ;
    using NACK = USART_CR_NACK_Values<USART1::CR3, 4, 1, ReadWriteMode, USART1CR3Base> ;
    using HDSEL = USART_CR_HDSEL_Values<USART1::CR3, 3, 1, ReadWriteMode, USART1CR3Base> ;
    using IRLP = USART_CR_IRLP_Values<USART1::CR3, 2, 1, ReadWriteMode, USART1CR3Base> ;
    using IREN = USART_CR_IREN_Values<USART1::CR3, 1, 1, ReadWriteMode, USART1CR3Base> ;
    using EIE = USART_CR_EIE_Values<USART1::CR3, 0, 1, ReadWriteMode, USART1CR3Base> ;
  } ;

  template<typename... T> 
  using CR3Pack  = Register<0x40011014, 32, ReadWriteMode, USART1CR3Base, T...> ;

  struct USART1GTPRBase {} ;

  struct GTPR : public RegisterBase<0x40011018, 32, ReadWriteMode>
  {
    using GT = USART_GTPR_GT_Values<USART1::GTPR, 8, 8, ReadWriteMode, USART1GTPRBase> ;
    using PSC = USART_GTPR_PSC_Values<USART1::GTPR, 0, 8, ReadWriteMode, USART1GTPRBase> ;
  } ;

  template<typename... T> 
  using GTPRPack  = Register<0x40011018, 32, ReadWriteMode, USART1GTPRBase, T...> ;

} ;

#endif //#if !defined(USART1REGISTERS_HPP)
