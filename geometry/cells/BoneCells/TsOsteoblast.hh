//
// ********************************************************************
// *                                                                  *
// * This file is part of the TOPAS-nBio extensions to the            *
// *   TOPAS Simulation Toolkit.                                      *
// * The TOPAS-nBio extensions are freely available under the license *
// *   agreement set forth at: https://topas-nbio.readthedocs.io/     *
// *                                                                  *
// ********************************************************************
//

#ifndef TsOsteoblast_hh
#define TsOsteoblast_hh

#include "TsVGeometryComponent.hh"


class TsOsteoblast : public TsVGeometryComponent
{    
public:
	TsOsteoblast(TsParameterManager* pM, TsExtensionManager* eM, TsMaterialManager* mM, TsGeometryManager* gM,
				  TsVGeometryComponent* parentComponent, G4VPhysicalVolume* parentVolume, G4String& name);
	~TsOsteoblast();
	
	G4VPhysicalVolume* Construct();
    
    void ResolveParameters();
    
private:
    G4double HLX;
    G4double HLY;
    G4double HLZ;
    
};

#endif
