//
// Created by trost on 29.05.15.
//

#include "KSGenEnergyBetaDecayBuilder.h"
#include "KSRootBuilder.h"

using namespace Kassiopeia;
namespace katrin
{

    template< >
    KSGenEnergyBetaDecayBuilder::~KComplexElement()
    {
    }

    STATICINT sKSGenEnergyBetaDecayStructure =
            KSGenEnergyBetaDecayBuilder::Attribute< string >( "name" ) +
            KSGenEnergyBetaDecayBuilder::Attribute< int >( "daughter_z" ) +
            KSGenEnergyBetaDecayBuilder::Attribute< int >( "nmax" ) +
            KSGenEnergyBetaDecayBuilder::Attribute< double >( "endpoint_ev" ) +
            KSGenEnergyBetaDecayBuilder::Attribute< double >( "mnu_ev" ) +
            KSGenEnergyBetaDecayBuilder::Attribute< double >( "min_energy" ) +
            KSGenEnergyBetaDecayBuilder::Attribute< double >( "max_energy" );

    STATICINT sKSGenEnergyBetaDecay =
            KSRootBuilder::ComplexElement< KSGenEnergyBetaDecay >( "ksgen_energy_beta_decay" );

}