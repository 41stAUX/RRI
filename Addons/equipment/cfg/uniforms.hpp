class GUNIFORM(Base): ls_gar_phase2_uniform
{
	scope = 2;
	scopeArsenal = 2;
	displayName = "[41st] P2 Uniform";

	class ItemInfo: ItemInfo {
		uniformType = "Neopren";
		uniformClass = QGUNIT(Base);
		containerClass = UNIFORM_SUPPLYCLASS;
		mass = 40;
	};
};

class GUNIFORM(MC): ls_gar_marshalCommander_uniform
{
	scope = 2;
	displayName = "[41st] Marshal Commander Uniform";

	class ItemInfo: ItemInfo {
		uniformType = "Neopren";
		uniformClass = QGUNIT(base);
		containerClass = UNIFORM_SUPPLYCLASS;
		mass = 40;
	};
};

//P2 Rank
MACRO_UNIFORM(P2,Recruit);
MACRO_UNIFORM(P2,Enlisted);
MACRO_UNIFORM(P2,Veteran);
MACRO_UNIFORM(P2,NCO);

//P2 Custom

//Pilot Rank
MACRO_UNIFORM(Pilot,Recruit);
MACRO_UNIFORM(Pilot,Enlisted);
MACRO_UNIFORM(Pilot,Veteran);
MACRO_UNIFORM(Pilot,NCO);