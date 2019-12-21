/*******************************************************************************
* Filename      : spi3registers.hpp
*
* Details       : Serial peripheral interface. This header file is
*                 auto-generated for STM32F411 device.
*
*
*******************************************************************************/

#if !defined(SPI3REGISTERS_HPP)
#define SPI3REGISTERS_HPP

#include "spi3fieldvalues.hpp"  //for Bits Fields defs 
#include "registerbase.hpp"   //for RegisterBase
#include "register.hpp"       //for Register
#include "accessmode.hpp"     //for ReadMode, WriteMode, ReadWriteMode  

struct SPI3
{
  struct SPI3CR1Base {} ;

  struct CR1 : public RegisterBase<0x40003C00, 32, ReadWriteMode>
  {
    using BIDIMODE = SPI_CR_BIDIMODE_Values<SPI3::CR1, 15, 1, ReadWriteMode, SPI3CR1Base> ;
    using BIDIOE = SPI_CR_BIDIOE_Values<SPI3::CR1, 14, 1, ReadWriteMode, SPI3CR1Base> ;
    using CRCEN = SPI_CR_CRCEN_Values<SPI3::CR1, 13, 1, ReadWriteMode, SPI3CR1Base> ;
    using CRCNEXT = SPI_CR_CRCNEXT_Values<SPI3::CR1, 12, 1, ReadWriteMode, SPI3CR1Base> ;
    using DFF = SPI_CR_DFF_Values<SPI3::CR1, 11, 1, ReadWriteMode, SPI3CR1Base> ;
    using RXONLY = SPI_CR_RXONLY_Values<SPI3::CR1, 10, 1, ReadWriteMode, SPI3CR1Base> ;
    using SSM = SPI_CR_SSM_Values<SPI3::CR1, 9, 1, ReadWriteMode, SPI3CR1Base> ;
    using SSI = SPI_CR_SSI_Values<SPI3::CR1, 8, 1, ReadWriteMode, SPI3CR1Base> ;
    using LSBFIRST = SPI_CR_LSBFIRST_Values<SPI3::CR1, 7, 1, ReadWriteMode, SPI3CR1Base> ;
    using SPE = SPI_CR_SPE_Values<SPI3::CR1, 6, 1, ReadWriteMode, SPI3CR1Base> ;
    using BR = SPI_CR_BR_Values<SPI3::CR1, 3, 3, ReadWriteMode, SPI3CR1Base> ;
    using MSTR = SPI_CR_MSTR_Values<SPI3::CR1, 2, 1, ReadWriteMode, SPI3CR1Base> ;
    using CPOL = SPI_CR_CPOL_Values<SPI3::CR1, 1, 1, ReadWriteMode, SPI3CR1Base> ;
    using CPHA = SPI_CR_CPHA_Values<SPI3::CR1, 0, 1, ReadWriteMode, SPI3CR1Base> ;
  } ;

  template<typename... T> 
  using CR1Pack  = Register<0x40003C00, 32, ReadWriteMode, SPI3CR1Base, T...> ;

  struct SPI3CR2Base {} ;

  struct CR2 : public RegisterBase<0x40003C04, 32, ReadWriteMode>
  {
    using TXEIE = SPI_CR_TXEIE_Values<SPI3::CR2, 7, 1, ReadWriteMode, SPI3CR2Base> ;
    using RXNEIE = SPI_CR_RXNEIE_Values<SPI3::CR2, 6, 1, ReadWriteMode, SPI3CR2Base> ;
    using ERRIE = SPI_CR_ERRIE_Values<SPI3::CR2, 5, 1, ReadWriteMode, SPI3CR2Base> ;
    using FRF = SPI_CR_FRF_Values<SPI3::CR2, 4, 1, ReadWriteMode, SPI3CR2Base> ;
    using SSOE = SPI_CR_SSOE_Values<SPI3::CR2, 2, 1, ReadWriteMode, SPI3CR2Base> ;
    using TXDMAEN = SPI_CR_TXDMAEN_Values<SPI3::CR2, 1, 1, ReadWriteMode, SPI3CR2Base> ;
    using RXDMAEN = SPI_CR_RXDMAEN_Values<SPI3::CR2, 0, 1, ReadWriteMode, SPI3CR2Base> ;
  } ;

  template<typename... T> 
  using CR2Pack  = Register<0x40003C04, 32, ReadWriteMode, SPI3CR2Base, T...> ;

  struct SPI3SRBase {} ;

  struct SR : public RegisterBase<0x40003C08, 32, ReadWriteMode>
  {
    using TIFRFE = SPI_SR_TIFRFE_Values<SPI3::SR, 8, 1, ReadMode, SPI3SRBase> ;
    using BSY = SPI_SR_BSY_Values<SPI3::SR, 7, 1, ReadMode, SPI3SRBase> ;
    using OVR = SPI_SR_OVR_Values<SPI3::SR, 6, 1, ReadMode, SPI3SRBase> ;
    using MODF = SPI_SR_MODF_Values<SPI3::SR, 5, 1, ReadMode, SPI3SRBase> ;
    using CRCERR = SPI_SR_CRCERR_Values<SPI3::SR, 4, 1, ReadWriteMode, SPI3SRBase> ;
    using UDR = SPI_SR_UDR_Values<SPI3::SR, 3, 1, ReadMode, SPI3SRBase> ;
    using CHSIDE = SPI_SR_CHSIDE_Values<SPI3::SR, 2, 1, ReadMode, SPI3SRBase> ;
    using TXE = SPI_SR_TXE_Values<SPI3::SR, 1, 1, ReadMode, SPI3SRBase> ;
    using RXNE = SPI_SR_RXNE_Values<SPI3::SR, 0, 1, ReadMode, SPI3SRBase> ;
  } ;

  template<typename... T> 
  using SRPack  = Register<0x40003C08, 32, ReadWriteMode, SPI3SRBase, T...> ;

  struct SPI3DRBase {} ;

  struct DR : public RegisterBase<0x40003C0C, 32, ReadWriteMode>
  {
    using DRField = SPI_DR_DR_Values<SPI3::DR, 0, 16, ReadWriteMode, SPI3DRBase> ;
  } ;

  template<typename... T> 
  using DRPack  = Register<0x40003C0C, 32, ReadWriteMode, SPI3DRBase, T...> ;

  struct SPI3CRCPRBase {} ;

  struct CRCPR : public RegisterBase<0x40003C10, 32, ReadWriteMode>
  {
    using CRCPOLY = SPI_CRCPR_CRCPOLY_Values<SPI3::CRCPR, 0, 16, ReadWriteMode, SPI3CRCPRBase> ;
  } ;

  template<typename... T> 
  using CRCPRPack  = Register<0x40003C10, 32, ReadWriteMode, SPI3CRCPRBase, T...> ;

  struct SPI3RXCRCRBase {} ;

  struct RXCRCR : public RegisterBase<0x40003C14, 32, ReadMode>
  {
    using RxCRC = SPI_RXCRCR_RxCRC_Values<SPI3::RXCRCR, 0, 16, ReadMode, SPI3RXCRCRBase> ;
  } ;

  template<typename... T> 
  using RXCRCRPack  = Register<0x40003C14, 32, ReadMode, SPI3RXCRCRBase, T...> ;

  struct SPI3TXCRCRBase {} ;

  struct TXCRCR : public RegisterBase<0x40003C18, 32, ReadMode>
  {
    using TxCRC = SPI_TXCRCR_TxCRC_Values<SPI3::TXCRCR, 0, 16, ReadMode, SPI3TXCRCRBase> ;
  } ;

  template<typename... T> 
  using TXCRCRPack  = Register<0x40003C18, 32, ReadMode, SPI3TXCRCRBase, T...> ;

  struct SPI3I2SCFGRBase {} ;

  struct I2SCFGR : public RegisterBase<0x40003C1C, 32, ReadWriteMode>
  {
    using I2SMOD = SPI_ISCFGR_ISMOD_Values<SPI3::I2SCFGR, 11, 1, ReadWriteMode, SPI3I2SCFGRBase> ;
    using I2SE = SPI_ISCFGR_ISE_Values<SPI3::I2SCFGR, 10, 1, ReadWriteMode, SPI3I2SCFGRBase> ;
    using I2SCFG = SPI_ISCFGR_ISCFG_Values<SPI3::I2SCFGR, 8, 2, ReadWriteMode, SPI3I2SCFGRBase> ;
    using PCMSYNC = SPI_ISCFGR_PCMSYNC_Values<SPI3::I2SCFGR, 7, 1, ReadWriteMode, SPI3I2SCFGRBase> ;
    using I2SSTD = SPI_ISCFGR_ISSTD_Values<SPI3::I2SCFGR, 4, 2, ReadWriteMode, SPI3I2SCFGRBase> ;
    using CKPOL = SPI_ISCFGR_CKPOL_Values<SPI3::I2SCFGR, 3, 1, ReadWriteMode, SPI3I2SCFGRBase> ;
    using DATLEN = SPI_ISCFGR_DATLEN_Values<SPI3::I2SCFGR, 1, 2, ReadWriteMode, SPI3I2SCFGRBase> ;
    using CHLEN = SPI_ISCFGR_CHLEN_Values<SPI3::I2SCFGR, 0, 1, ReadWriteMode, SPI3I2SCFGRBase> ;
  } ;

  template<typename... T> 
  using I2SCFGRPack  = Register<0x40003C1C, 32, ReadWriteMode, SPI3I2SCFGRBase, T...> ;

  struct SPI3I2SPRBase {} ;

  struct I2SPR : public RegisterBase<0x40003C20, 32, ReadWriteMode>
  {
    using MCKOE = SPI_ISPR_MCKOE_Values<SPI3::I2SPR, 9, 1, ReadWriteMode, SPI3I2SPRBase> ;
    using ODD = SPI_ISPR_ODD_Values<SPI3::I2SPR, 8, 1, ReadWriteMode, SPI3I2SPRBase> ;
    using I2SDIV = SPI_ISPR_ISDIV_Values<SPI3::I2SPR, 0, 8, ReadWriteMode, SPI3I2SPRBase> ;
  } ;

  template<typename... T> 
  using I2SPRPack  = Register<0x40003C20, 32, ReadWriteMode, SPI3I2SPRBase, T...> ;

} ;

#endif //#if !defined(SPI3REGISTERS_HPP)
