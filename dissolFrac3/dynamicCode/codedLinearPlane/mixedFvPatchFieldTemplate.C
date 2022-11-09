/*---------------------------------------------------------------------------*\
  =========                 |
  \\      /  F ield         | OpenFOAM: The Open Source CFD Toolbox
   \\    /   O peration     |
    \\  /    A nd           | www.openfoam.com
     \\/     M anipulation  |
-------------------------------------------------------------------------------
    Copyright (C) 2019 OpenCFD Ltd.
    Copyright (C) YEAR AUTHOR, AFFILIATION
-------------------------------------------------------------------------------
License
    This file is part of OpenFOAM.

    OpenFOAM is free software: you can redistribute it and/or modify it
    under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    OpenFOAM is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
    for more details.

    You should have received a copy of the GNU General Public License
    along with OpenFOAM.  If not, see <http://www.gnu.org/licenses/>.

\*---------------------------------------------------------------------------*/

#include "mixedFvPatchFieldTemplate.H"
#include "addToRunTimeSelectionTable.H"
#include "fvPatchFieldMapper.H"
#include "volFields.H"
#include "surfaceFields.H"
#include "unitConversion.H"

//{{{ begin codeInclude
#include "addToRunTimeSelectionTable.H"
            #include "plane.H"
//}}} end codeInclude


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

namespace Foam
{

// * * * * * * * * * * * * * * * Local Functions * * * * * * * * * * * * * * //

//{{{ begin localCode

//}}} end localCode

// * * * * * * * * * * * * * * * Global Functions  * * * * * * * * * * * * * //

// dynamicCode:
// SHA1 = 05da4d5eb6b9ce199b3a72b2cf5707017d7ee94a
//
// unique function name that can be checked if the correct library version
// has been loaded
extern "C" void codedLinearPlane_05da4d5eb6b9ce199b3a72b2cf5707017d7ee94a(bool load)
{
    if (load)
    {
        // Code that can be explicitly executed after loading
    }
    else
    {
        // Code that can be explicitly executed before unloading
    }
}

// * * * * * * * * * * * * * * Static Data Members * * * * * * * * * * * * * //

makeRemovablePatchTypeField
(
    fvPatchScalarField,
    codedLinearPlaneMixedValueFvPatchScalarField
);


// * * * * * * * * * * * * * * * * Constructors  * * * * * * * * * * * * * * //

codedLinearPlaneMixedValueFvPatchScalarField::
codedLinearPlaneMixedValueFvPatchScalarField
(
    const fvPatch& p,
    const DimensionedField<scalar, volMesh>& iF
)
:
    mixedFvPatchField<scalar>(p, iF)
{
    if (false)
    {
        printMessage("Construct codedLinearPlane : patch/DimensionedField");
    }
}


codedLinearPlaneMixedValueFvPatchScalarField::
codedLinearPlaneMixedValueFvPatchScalarField
(
    const codedLinearPlaneMixedValueFvPatchScalarField& ptf,
    const fvPatch& p,
    const DimensionedField<scalar, volMesh>& iF,
    const fvPatchFieldMapper& mapper
)
:
    mixedFvPatchField<scalar>(ptf, p, iF, mapper)
{
    if (false)
    {
        printMessage("Construct codedLinearPlane : patch/DimensionedField/mapper");
    }
}


codedLinearPlaneMixedValueFvPatchScalarField::
codedLinearPlaneMixedValueFvPatchScalarField
(
    const fvPatch& p,
    const DimensionedField<scalar, volMesh>& iF,
    const dictionary& dict
)
:
    mixedFvPatchField<scalar>(p, iF, dict)
{
    if (false)
    {
        printMessage("Construct codedLinearPlane : patch/dictionary");
    }
}


codedLinearPlaneMixedValueFvPatchScalarField::
codedLinearPlaneMixedValueFvPatchScalarField
(
    const codedLinearPlaneMixedValueFvPatchScalarField& ptf
)
:
    mixedFvPatchField<scalar>(ptf)
{
    if (false)
    {
        printMessage("Copy construct codedLinearPlane");
    }
}


codedLinearPlaneMixedValueFvPatchScalarField::
codedLinearPlaneMixedValueFvPatchScalarField
(
    const codedLinearPlaneMixedValueFvPatchScalarField& ptf,
    const DimensionedField<scalar, volMesh>& iF
)
:
    mixedFvPatchField<scalar>(ptf, iF)
{
    if (false)
    {
        printMessage("Construct codedLinearPlane : copy/DimensionedField");
    }
}


// * * * * * * * * * * * * * * * * Destructor  * * * * * * * * * * * * * * * //

codedLinearPlaneMixedValueFvPatchScalarField::
~codedLinearPlaneMixedValueFvPatchScalarField()
{
    if (false)
    {
        printMessage("Destroy codedLinearPlane");
    }
}


// * * * * * * * * * * * * * * * Member Functions  * * * * * * * * * * * * * //

void codedLinearPlaneMixedValueFvPatchScalarField::updateCoeffs()
{
    if (this->updated())
    {
        return;
    }

    if (false)
    {
        printMessage("updateCoeffs codedLinearPlane");
    }

//{{{ begin code
    #include "../../constant/bcInclude/linearPlane.H"
//}}} end code

    this->mixedFvPatchField<scalar>::updateCoeffs();
}


// * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * //

} // End namespace Foam

// ************************************************************************* //

