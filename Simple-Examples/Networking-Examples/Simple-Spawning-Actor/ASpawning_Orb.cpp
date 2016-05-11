//---------------------------------------------------------------------------------------------------------------------------------------
// This actor is spawned by another actor. The Mesh and visible objects are set through the blueprint system.							              -
//																																		                                                                  -
// Nicholas Mallonee																													                                                          -
// Unreal Engine 4.10.2																													                                                        -
//---------------------------------------------------------------------------------------------------------------------------------------

//---------------------------------------------------------------------------------------------------------------------------------------
// Libraries																															                                                              -
//---------------------------------------------------------------------------------------------------------------------------------------
#include "ReplicationPractice.h"
#include "Spawning_Orb.h"

//---------------------------------------------------------------------------------------------------------------------------------------
// Constructors																														                                                            	-
//---------------------------------------------------------------------------------------------------------------------------------------
ASpawning_Orb::ASpawning_Orb()
{
	PrimaryActorTick.bCanEverTick = false;

	// -- Replication Settings  -- 
	this->SetReplicates(true);
}

//---------------------------------------------------------------------------------------------------------------------------------------
// Engine Events																														                                                            -
//---------------------------------------------------------------------------------------------------------------------------------------
void ASpawning_Orb::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASpawning_Orb::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

//---------------------------------------------------------------------------------------------------------------------------------------
// List of Replicated Properties.																										                                                    -
//---------------------------------------------------------------------------------------------------------------------------------------
void ASpawning_Orb::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}
