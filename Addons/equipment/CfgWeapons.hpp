class CfgWeapons 
{
	///vest
	class SWLB_clone_airborne_armor;
	class SWLB_clone_basic_armor;
	class ls_blueforVest_base;
	class SWLB_CEE_ARF_Vest: SWLB_clone_airborne_armor
	{
		class ItemInfo;
	};
	class SWLB_CEE_Force_Recon_NCO: SWLB_clone_airborne_armor
	{
		class ItemInfo;
	};
	class SWLB_CEE_Force_Recon_Officer:SWLB_clone_airborne_armor
	{
		class ItemInfo;
	};
	class SWLB_CEE_Engineer_Vest: SWLB_clone_airborne_armor
	{
		class ItemInfo;
	};
	class SWLB_CEE_Engineer_Vest_NCO: SWLB_clone_airborne_armor
	{
		class ItemInfo;
	};
	class SWLB_CEE_Engineer_Vest_Officer: SWLB_clone_airborne_armor
	{
		class ItemInfo;
	};
	class SWLB_clone_recon_armor: SWLB_clone_basic_armor
	{
		class ItemInfo;
	};
	class SWLB_clone_recon_nco_armor: SWLB_clone_recon_armor
	{
		class ItemInfo;
	};
	class SWLB_clone_recon_officer_armor: SWLB_clone_basic_armor
	{
		class ItemInfo;
	};
	class ls_gar_heavy_vest: ls_blueforVest_base
	{
		class ItemInfo;
	};
	class ls_gar_heavyAlt_vest: ls_blueforVest_base
	{
		class ItemInfo;
	};
	class ls_gar_airborneOfficer_vest: ls_blueforVest_base
	{
		class ItemInfo;
	};
	class SWLB_clone_specialist_armor: SWLB_clone_basic_armor
	{
		class ItemInfo;
	};
	
	#include "cfg\vests.hpp"

	//NVG
		class JLTS_NVG_droid_chip_1;
		class lsd_gar_standard_nvg;
		class lsd_gar_standardSPC_nvg;
		class lsd_gar_rangefinder_nvg;
		class lsd_gar_p2SingleHeadLamp_nvg;
		class lsd_gar_medicalScannerSPC_nvg;
		class lsd_gar_p2Commander_nvg;
		class lsd_gar_p2MarshalCommander_nvg;
		class SWLB_CEE_Engineer_Comms;
		class lsd_gar_artilleryGunner_nvg;
		class ls_memefor_splinterCell_nvg;

		#include "cfg\nvg.hpp"

	//Helemts
		class ls_gar_phase2_helmet;
		class ls_gar_phase2Pilot_helmet;
		class ls_gar_phase1Arf_helmet;
		class ls_gar_barc_helmet;
		class ls_sob_phase2SpecOp_helmet;

		#include "cfg\helmets.hpp"

	//Uniforms
		class ls_gar_phase2_uniform;
		class ls_gar_marshalCommander_uniform;

		#include "cfg\Uniforms.hpp"
};