class CfgPatches {
    class POPLife_Reborn {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        fileName = "POPLife_Reborn.pbo";
        author = "Adamuz Systems";
        requiredAddons[] = {
            "pop_carreteras"
        };
        worlds[] = {
            "POPLife_Reborn"
        };
    };
};
class CfgVehicles {};
class CfgWorlds {
    class DefaultWorld {
        class Weather {
            class Overcast;
        };
        class WaterExPars;
    };
    class CAWorld: DefaultWorld {
        class Grid {};
        class DayLightingBrightAlmost;
        class DayLightingRainy;
        class DefaultClutter;
        class EnvSounds;
        class Weather: Weather {
            class Lighting;
            class Overcast: Overcast {
                class Weather1;
                class Weather2;
                class Weather3;
                class Weather4;
                class Weather5;
                class Weather6;
            };
        };
    };
    class DefaultLighting;
    class POPLife_Reborn: CAWorld {
        worldId = 5;
        cutscenes[] = {};
        description = "POPLife Reborn By Adamuz Systems";
        icon = "";
        worldName = "poplife_reborn\POPLife_Reborn.wrp";
        pictureMap = "\poplife_reborn\data\pictureMap_ca.paa";
        pictureShot = "\poplife_reborn\data\pictureMap_ca.paa";
        plateFormat = "A#$-####";
        plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
        author = "Adamuz Systems";
        mapsize = 10240;
        mapZone = 31;
        longitude = 20;
        latitude = 0;
        envTexture = "A3\data_f\env_land_ca.paa";
        newRoadsShape = "\poplife_reborn\data\roads\roads.shp";
        clutterGrid = 0.8;
        clutterDist = 100;
        noDetailDist = 50;
        fullDetailDist = 5;
        clutterRoadwayCheckRadiusCoef = "1f";
        interpolateClutterColoring = 1;
        clutterColoringFarCoef = "5.0f";
        clutterColoringFarStart = "20.0f";
        clutterColoringFarSpeed = "2.0f";
        class OutsideTerrain {
            satellite = "";
            enableTerrainSynth = 0;
            class Layers {
                class Layer0 {
                    nopx = "A3\Map_Data\gdt_seabed_nopx.paa";
                    texture = "A3\Map_Data\gdt_seabed_nopx.paa";
                };
            };
            colorOutside[] = {
                0.227451,
                0.27451,
                0.384314,
                1
            };
        };
        class Grid: Grid {
            offsetX = 0;
            offsetY = 10240;
            class Zoom1 {
                zoomMax = 0.35;
                format = "XY";
                formatX = "000";
                formatY = "000";
                stepX = 100;
                stepY = -100;
            };
            class Zoom2 {
                zoomMax = 1.0;
                format = "XY";
                formatX = "00";
                formatY = "00";
                stepX = 1000;
                stepY = -1000;
            };
            class Zoom3 {
                zoomMax = 1e+030;
                format = "XY";
                formatX = "0";
                formatY = "0";
                stepX = 10000;
                stepY = -10000;
            };
        };
        startTime = "07:30";
        startDate = "06/02/2019";
        centerPosition[] = {
            5120,
            5120,
            500
        };
        seagullPos[] = {
            5120,
            5120,
            500
        };
        ilsPosition[] = {
            1024,
            1024
        };
        ilsDirection[] = {
            0.5075,
            0.08,
            -0.8616
        };
        ilsTaxiIn[] = {};
        ilsTaxiOff[] = {};
        drawTaxiway = 0;
        mapDrawingBrightnessModifier = 1.5;
        elevationOffset = 0;
        class EnvMaps {
            class EnvMap1 {
                texture = "A3\Map_Stratis\data\env_land_ClearSky_ca.paa";
                overcast = 0;
            };
            class EnvMap2 {
                texture = "A3\Map_Stratis\data\env_land_SemiCloudySky_ca.paa";
                overcast = 0;
            };
            class EnvMap3 {
                texture = "A3\Map_Stratis\data\env_land_OvercastSky_ca.paa";
                overcast = 0;
            };
        };
        class ReplaceObjects {};
        class Sounds {
            sounds[] = {};
        };
        class Animation {
            vehicles[] = {};
        };
        midDetailTexture = "A3\Map_Data\middle_mco.paa";
        minTreesInForestSquare = 2;
        minRocksInRockSquare = 2;
        horizonParallaxCoef = 0;
        horizonFogColorationStart = "0.8f";
        skyFogColorationStart = "0.7f";
        soundMapSizeCoef = 4;
        satelliteNormalBlendStart = 10;
        satelliteNormalBlendEnd = 100;
        hazeBaseHeight = 0;
        hazeBaseBeta0 = 8e-005;
        hazeDensityDecay = 0.00036;
        horizonSunColorationIntensity = 0.001;
        aroundSunCoefMultiplier = "1.4f";
        aroundSunCoefExponent = "12f";
        skyObject = "A3\Map_Stratis\data\obloha.p3d";
        horizontObject = "A3\Map_Stratis\data\horizont.p3d";
        skyTexture = "A3\Map_Stratis\data\sky_semicloudy_sky.paa";
        skyTextureR = "A3\Map_Stratis\data\sky_semicloudy_lco.paa";
        terrainBlendMaxDarkenCoef = "0.85f";
        terrainBlendMaxBrightenCoef = "0.15f";
        class SecondaryAirports {};
        class DefaultClutter;
        class Clutter {
            class GrassGreen: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Grass_Green.p3d";
                affectedByWind = 1.0;
                swLighting = "true";
                scaleMin = 0.85;
                scaleMax = 1.0;
                surfaceColor[] = {
                    0.431,
                    0.475,
                    0.267
                };
            };
            class GrassDry: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Grass_Dry.p3d";
                affectedByWind = 1.0;
                swLighting = "true";
                scaleMin = 0.3;
                scaleMax = 0.9;
            };
            class StrGrassGreenGroup: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrGrassGreen_group.p3d";
                affectedByWind = 0.6;
                swLighting = "true";
                scaleMin = 0.7;
                scaleMax = 1.0;
            };
            class StrGrassDry: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrGrassDry.p3d";
                affectedByWind = 0.5;
                swLighting = "true";
                scaleMin = 0.8;
                scaleMax = 1.2;
            };
            class StrGrassDryGroup: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrGrassDry_group.p3d";
                affectedByWind = 0.65;
                swLighting = "true";
                scaleMin = 0.65;
                scaleMax = 1.0;
            };
            class StrGrassDryMediumGroup: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrGrassDryMedium_group.p3d";
                affectedByWind = 0.65;
                swLighting = "true";
                scaleMin = 0.65;
                scaleMax = 1.0;
            };
            class c_Grass_TuftDry: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Grass_TuftDry.p3d";
                affectedByWind = 0.7;
                swLighting = "true";
                scaleMin = 0.8;
                scaleMax = 1.0;
            };
            class c_GrassDead_Tuft_Stony: DefaultClutter {
                model = "A3\plants_f\Clutter\c_GrassDead_Tuft_Stony.p3d";
                affectedByWind = 0.7;
                swLighting = "true";
                scaleMin = 0.7;
                scaleMax = 1.0;
            };
            class c_GrassLong_DryBunch: DefaultClutter {
                model = "A3\plants_f\Clutter\c_GrassLong_DryBunch.p3d";
                affectedByWind = 0.7;
                swLighting = "true";
                scaleMin = 0.6;
                scaleMax = 1.1;
            };
            class StrThornGreenSmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThornGreen.p3d";
                affectedByWind = 0.05;
                swLighting = "false";
                scaleMin = 0.3;
                scaleMax = 0.5;
            };
            class StrThornGreenBig: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThornGreen.p3d";
                affectedByWind = 0.05;
                swLighting = "false";
                scaleMin = 0.7;
                scaleMax = 0.9;
            };
            class StrThornGraySmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThornGray.p3d";
                affectedByWind = 0.05;
                swLighting = "false";
                scaleMin = 0.5;
                scaleMax = 0.7;
            };
            class StrThornGrayBig: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThornGray.p3d";
                affectedByWind = 0.05;
                swLighting = "false";
                scaleMin = 0.8;
                scaleMax = 1.2;
            };
            class StrPlantGreenShrub: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrPlantGreenShrub.p3d";
                affectedByWind = 0.5;
                swLighting = "true";
                scaleMin = 0.6;
                scaleMax = 1.1;
            };
            class StrPlantGermaderGroup: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrPlantGermader_group.p3d";
                affectedByWind = 0.35;
                swLighting = "true";
                scaleMin = 0.9;
                scaleMax = 1.5;
            };
            class StrWeedBrownTallGroup: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrWeedBrownTall_group.p3d";
                affectedByWind = 0.3;
                swLighting = "true";
                scaleMin = 0.9;
                scaleMax = 1.25;
            };
            class StrWeedGreenTall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrWeedGreenTall.p3d";
                affectedByWind = 0.3;
                swLighting = "true";
                scaleMin = 0.8;
                scaleMax = 1.2;
            };
            class StrPlantMullein: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrPlantMullein.p3d";
                affectedByWind = 0.35;
                swLighting = "true";
                scaleMin = 0.7;
                scaleMax = 1.15;
            };
            class StrThistlePurpleSmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThistlePurple_small.p3d";
                affectedByWind = 0.1;
                swLighting = "true";
                scaleMin = 0.9;
                scaleMax = 1.4;
            };
            class StrThistleSmallYellow: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThistleSmallYellow.p3d";
                affectedByWind = 0.2;
                swLighting = "true";
                scaleMin = 0.6;
                scaleMax = 1.4;
            };
            class StrThistleYellowShrub: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThistleYellowShrub.p3d";
                affectedByWind = 0.2;
                swLighting = "true";
                scaleMin = 0.7;
                scaleMax = 1.1;
            };
            class GrassTall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Grass_Tall_Dead.p3d";
                affectedByWind = 1.0;
                swLighting = "true";
                scaleMin = 0.6;
                scaleMax = 1.0;
            };
            class GrassBrushHighGreen: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Grass_BrushHigh_Green.p3d";
                affectedByWind = 0.8;
                swLighting = "true";
                scaleMin = 0.5;
                scaleMax = 0.7;
            };
            class GrassBunchSmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Grass_Bunch_Small.p3d";
                affectedByWind = 0.8;
                swLighting = "true";
                scaleMin = 0.3;
                scaleMax = 0.8;
            };
            class ThistleHighDead: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_High_Dead.p3d";
                affectedByWind = 1.0;
                swLighting = "true";
                scaleMin = 0.4;
                scaleMax = 0.8;
            };
            class ThistleHigh: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_High.p3d";
                affectedByWind = 0.6;
                swLighting = "true";
                scaleMin = 0.6;
                scaleMax = 1.0;
            };
            class ThistleSmallYellow: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_Small_Yellow.p3d";
                affectedByWind = 0.3;
                swLighting = "true";
                scaleMin = 0.3;
                scaleMax = 0.9;
            };
            class ThistleThornGreen: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_Thorn_Green.p3d";
                affectedByWind = 0.3;
                swLighting = "false";
                scaleMin = 0.3;
                scaleMax = 1.0;
            };
            class ThistleThornGreenSmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_Thorn_Green.p3d";
                affectedByWind = 0.25;
                swLighting = "false";
                scaleMin = 0.4;
                scaleMax = 0.7;
            };
            class ThistleThornBrown: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d";
                affectedByWind = 0.3;
                swLighting = "false";
                scaleMin = 0.5;
                scaleMax = 1.2;
            };
            class ThistleThornBrownSmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d";
                affectedByWind = 0.25;
                swLighting = "false";
                scaleMin = 0.3;
                scaleMax = 0.7;
            };
            class ThistleThornGray: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_Thorn_Gray.p3d";
                affectedByWind = 0.3;
                swLighting = "false";
                scaleMin = 1.1;
                scaleMax = 1.4;
            };
            class ThistleThornDesert: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_Thorn_Desert.p3d";
                affectedByWind = 0.3;
                swLighting = "false";
                scaleMin = 0.4;
                scaleMax = 1.4;
            };
            class PlantGreenSmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Plant_Green_Small.p3d";
                affectedByWind = 0.7;
                swLighting = "true";
                scaleMin = 0.5;
                scaleMax = 1.1;
            };
            class FlowerCakile: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Flower_Cakile.p3d";
                affectedByWind = 0.4;
                swLighting = "true";
                scaleMin = 0.6;
                scaleMax = 0.8;
            };
            class FlowerLowYellow2: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Flower_Low_Yellow2.p3d";
                affectedByWind = 0.4;
                swLighting = "true";
                scaleMin = 0.6;
                scaleMax = 1.0;
            };
            class GrassCrookedDead: DefaultClutter {
                model = "A3\plants_f\Clutter\c_GrassCrooked.p3d";
                affectedByWind = 0.6;
                swLighting = "true";
                scaleMin = 0.8;
                scaleMax = 1.1;
            };
            class GrassTalltwo: DefaultClutter {
                model = "A3\plants_f\Clutter\c_GrassTall.p3d";
                affectedByWind = 0.8;
                swLighting = "true";
                scaleMin = 0.75;
                scaleMax = 1.15;
            };
            class GrassLong_DryBunch: DefaultClutter {
                model = "A3\plants_f\Clutter\c_GrassLong_DryBunch.p3d";
                affectedByWind = 0.8;
                swLighting = "true";
                scaleMin = 0.9;
                scaleMax = 1.2;
            };
            class GrassDesertGroupSoft: DefaultClutter {
                model = "A3\plants_f\Clutter\c_GrassGreen_GroupSoft.p3d";
                affectedByWind = 1.0;
                swLighting = "true";
                scaleMin = 0.6;
                scaleMax = 1.1;
            };
        };
        dynLightMinBrightnessAmbientCoef = 0.5;
        dynLightMinBrightnessAbsolute = 0.05;
        class Sea {
            seaTexture = "a3\data_f\seatexture_co.paa";
            seaMaterial = "#water";
            shoreMaterial = "#shore";
            shoreFoamMaterial = "#shorefoam";
            shoreWetMaterial = "#shorewet";
            WaterMapScale = 20;
            WaterGrid = 50;
            MaxTide = 0;
            MaxWave = 0.25;
            SeaWaveXScale = "2.0/50";
            SeaWaveZScale = "1.0/50";
            SeaWaveHScale = 1;
            SeaWaveXDuration = 5000;
            SeaWaveZDuration = 10000;
        };
        class Underwater {
            noWaterFog = -0.001;
            fullWaterFog = 0.001;
            deepWaterFog = 200;
            waterFogDistanceNear = 10;
            waterFogDistance = 40;
            waterColor[] = {
                0.04,
                0.16,
                0.22
            };
            deepWaterColor[] = {
                0,
                0.001,
                0.009
            };
            surfaceColor[] = {
                0.04,
                0.16,
                0.22
            };
            deepSurfaceColor[] = {
                0,
                0.001,
                0.009
            };
        };
        class SeaWaterShaderPars {
            refractionMoveCoef = 0.03;
            minWaterOpacity = 0;
            waterOpacityDistCoef = 0.4;
            underwaterOpacity = 0.5;
            waterOpacityFadeStart = 60;
            waterOpacityFadeLength = 120;
        };
        class WaterExPars: WaterExPars {
            fogDensity = 0.07;
            fogColor[] = {
                0.03015,
                0.07155,
                0.09045
            };
            fogColorExtinctionSpeed[] = {
                0.1814,
                0.0159,
                0.0111
            };
            ligtExtinctionSpeed[] = {
                0.1814,
                0.0159,
                0.0111
            };
            diffuseLigtExtinctionSpeed[] = {
                0.3814,
                0.2159,
                0.2111
            };
            fogGradientCoefs[] = {
                "0.35f",
                "1.0f",
                "1.7f"
            };
            fogColorLightInfluence[] = {
                0.8,
                0.2,
                1
            };
            shadowIntensity = "0.0f";
            ssReflectionStrength = 0.85;
            ssReflectionMaxJitter = 1;
            ssReflectionRippleInfluence = 0.2;
            ssReflectionEdgeFadingCoef = 10;
            ssReflectionDistFadingCoef = 4;
            refractionMinCoef = 0.03;
            refractionMaxCoef = 0.14;
            refractionMaxDist = 5.1;
            specularMaxIntensity = 100;
            specularPowerOvercast0 = 750;
            specularPowerOvercast1 = 50;
            specularNormalModifyCoef = 0.015;
            foamAroundObjectsIntensity = "0.15f";
            foamAroundObjectsFadeCoef = "8.0f";
            foamColorCoef = "2.0f";
            foamDeformationCoef = "0.02f";
            foamTextureCoef = "0.2f";
            foamTimeMoveSpeed = "0.2f";
            foamTimeMoveAmount = "0.1f";
            shoreDarkeningMaxCoef = "0.45f";
            shoreDarkeningOffset = "0.36f";
            shoreDarkeningGradient = "0.08f";
            shoreWaveTimeScale = "0.8f";
            shoreWaveShifDerivativeOffset = "-0.8f";
            shoreFoamIntensity = "0.25f";
            shoreMaxWaveHeight = "0.15f";
            shoreWetLayerReflectionIntensity = "0.55f";
        };
        startWeather = 0.3;
        startFog = 0;
        forecastWeather = 0.3;
        forecastFog = 0;
        startFogBase = 0;
        forecastFogBase = 0;
        startFogDecay = 0.014;
        forecastFogDecay = 0.014;
        fogBeta0Min = 0;
        fogBeta0Max = 0.05;
        class HDRNewPars {
            minAperture = 1e-005;
            maxAperture = 256;
            apertureRatioMax = 4;
            apertureRatioMin = 10;
            bloomImageScale = 1;
            bloomScale = 0.09;
            bloomExponent = 0.75;
            bloomLuminanceOffset = 0.4;
            bloomLuminanceScale = 0.15;
            bloomLuminanceExponent = 0.25;
            tonemapMethod = 1;
            tonemapShoulderStrength = 0.22;
            tonemapLinearStrength = 0.12;
            tonemapLinearAngle = 0.1;
            tonemapToeStrength = 0.2;
            tonemapToeNumerator = 0.022;
            tonemapToeDenominator = 0.2;
            tonemapLinearWhite = 11.2;
            tonemapExposureBias = 1;
            tonemapLinearWhiteReinhard = "2.5f";
            eyeAdaptFactorLight = 3.3;
            eyeAdaptFactorDark = 0.75;
            nvgApertureMin = 10;
            nvgApertureStandard = 12.5;
            nvgApertureMax = 16.5;
            nvgStandardAvgLum = 10;
            nvgLightGain = 320;
            nvgTransition = 1;
            nvgTransitionCoefOn = "40.0f";
            nvgTransitionCoefOff = "0.01f";
            nightShiftMinAperture = 0;
            nightShiftMaxAperture = 0.002;
            nightShiftMaxEffect = 0.6;
            nightShiftLuminanceScale = 600;
        };
        skyColorInfluencesFogColor = 0;
        class Lighting: DefaultLighting {
            groundReflection[] = {
                0.132,
                0.133,
                0.122
            };
            moonObjectColorFull[] = {
                460,
                440,
                400,
                1.0
            };
            moonHaloObjectColorFull[] = {
                465,
                477,
                475,
                1.0
            };
            moonsetObjectColor[] = {
                375,
                350,
                325,
                1.0
            };
            moonsetHaloObjectColor[] = {
                515,
                517,
                525,
                1.0
            };
            class ThunderBoltLight {
                diffuse[] = {
                    2120,
                    3170,
                    5550
                };
                ambient[] = {
                    0.001,
                    0.001,
                    0.001
                };
                intensity = 120000;
                class Attenuation {
                    start = 0.0;
                    constant = 0.0;
                    linear = 0.0;
                    quadratic = 1.0;
                };
            };
            starEmissivity = 40;
        };
        class DayLightingBrightAlmost: DayLightingBrightAlmost {
            deepNight[] = {-15,
                {
                    0.005,
                    0.01,
                    0.01
                },
                {
                    0.0,
                    0.002,
                    0.003
                },
                {
                    0.0,
                    0.0,
                    0.0
                },
                {
                    0.0,
                    0.0,
                    0.0
                },
                {
                    0.0,
                    0.002,
                    0.003
                },
                {
                    0.0,
                    0.002,
                    0.003
                },
                0
            };
            fullNight[] = {-5,
                {
                    0.182,
                    0.213,
                    0.25
                },
                {
                    0.05,
                    0.111,
                    0.221
                },
                {
                    0.04,
                    0.034,
                    0.004
                },
                {
                    0.039,
                    0.049,
                    0.072
                },
                {
                    0.082,
                    0.128,
                    0.185
                },
                {
                    0.283,
                    0.35,
                    0.431
                },
                0
            };
            sunMoon[] = {-3.75,
                {
                    0.377,
                    0.441,
                    0.518
                },
                {
                    0.103,
                    0.227,
                    0.453
                },
                {
                    0.04,
                    0.034,
                    0.004
                },
                {
                    0.039,
                    0.049,
                    0.072
                },
                {
                    0.174,
                    0.274,
                    0.395
                },
                {
                    0.582,
                    0.72,
                    0.887
                },
                0.5
            };
            earlySun[] = {-2.5,
                {
                    0.675,
                    0.69,
                    0.784
                },
                {
                    0.22,
                    0.322,
                    0.471
                },
                {
                    0.04,
                    0.034,
                    0.004
                },
                {
                    0.039,
                    0.049,
                    0.072
                },
                {
                    0.424,
                    0.549,
                    0.745
                },
                {
                    0.698,
                    0.753,
                    0.894
                },
                1
            };
            sunrise[] = {
                0,
                {
                    0.675,
                    0.69,
                    0.784
                },
                {
                    0.478,
                    0.51,
                    0.659
                },
                {
                    0.2,
                    0.19,
                    0.07
                },
                {
                    0.124,
                    0.161,
                    0.236
                },
                {
                    {
                        0.847,
                        0.855,
                        0.965
                    },
                    0.2
                },
                {
                    {
                        0.933,
                        0.949,
                        0.996
                    },
                    2
                },
                1
            };
            earlyMorning[] = {
                3,
                {
                    {
                        0.844,
                        0.61,
                        0.469
                    },
                    0.8
                },
                {
                    0.424,
                    0.557,
                    0.651
                },
                {
                    {
                        1,
                        0.45,
                        0.2
                    },
                    1
                },
                {
                    0.12,
                    0.26,
                    0.38
                },
                {
                    {
                        0.428,
                        0.579,
                        0.743
                    },
                    2
                },
                {
                    {
                        0.844,
                        0.61,
                        0.469
                    },
                    2.7
                },
                1
            };
            midMorning[] = {
                8,
                {
                    {
                        0.822,
                        0.75,
                        0.646
                    },
                    3.8
                },
                {
                    {
                        0.383,
                        0.58,
                        0.858
                    },
                    1.3
                },
                {
                    {
                        1.3,
                        0.9,
                        0.61
                    },
                    2.8
                },
                {
                    {
                        0.12,
                        0.18,
                        0.28
                    },
                    0.5
                },
                {
                    {
                        0.322,
                        0.478,
                        0.675
                    },
                    3.5
                },
                {
                    {
                        1.0,
                        0.929,
                        0.815
                    },
                    4.7
                },
                1
            };
            morning[] = {
                16,
                {
                    {
                        1,
                        0.95,
                        0.91
                    },
                    12.2
                },
                {
                    {
                        0.12,
                        0.18,
                        0.28
                    },
                    9.2
                },
                {
                    {
                        1,
                        0.95,
                        0.91
                    },
                    11.2
                },
                {
                    {
                        0.12,
                        0.18,
                        0.28
                    },
                    8.5
                },
                {
                    {
                        0.14,
                        0.18,
                        0.24
                    },
                    11.0
                },
                {
                    {
                        0.5,
                        0.6,
                        0.9
                    },
                    13.2
                },
                1
            };
            noon[] = {
                45,
                {
                    {
                        0.98,
                        0.94,
                        0.94
                    },
                    13.8
                },
                {
                    {
                        0.2,
                        0.27,
                        0.35
                    },
                    10.8
                },
                {
                    {
                        0.98,
                        0.94,
                        0.94
                    },
                    13.8
                },
                {
                    {
                        0.2,
                        0.27,
                        0.35
                    },
                    10.8
                },
                {
                    {
                        0.5,
                        0.64,
                        1.0
                    },
                    12.0
                },
                {
                    {
                        0.5,
                        0.5,
                        0.5
                    },
                    14.8
                },
                1,
                0.5,
                0.4,
                0.5,
                0.4
            };
        };
        class DayLightingRainy: DayLightingRainy {
            deepNight[] = {-15,
                {
                    0.005,
                    0.01,
                    0.01
                },
                {
                    0.0,
                    0.002,
                    0.003
                },
                {
                    0.0,
                    0.0,
                    0.0
                },
                {
                    0.0,
                    0.0,
                    0.0
                },
                {
                    0.0,
                    0.002,
                    0.003
                },
                {
                    0.0,
                    0.002,
                    0.003
                },
                0
            };
            fullNight[] = {-5,
                {
                    0.023,
                    0.023,
                    0.023
                },
                {
                    0.02,
                    0.02,
                    0.02
                },
                {
                    0.023,
                    0.023,
                    0.023
                },
                {
                    0.02,
                    0.02,
                    0.02
                },
                {
                    0.01,
                    0.01,
                    0.02
                },
                {
                    0.08,
                    0.06,
                    0.06
                },
                0
            };
            sunMoon[] = {-3.75,
                {
                    0.04,
                    0.04,
                    0.05
                },
                {
                    0.04,
                    0.04,
                    0.05
                },
                {
                    0.04,
                    0.04,
                    0.05
                },
                {
                    0.04,
                    0.04,
                    0.05
                },
                {
                    0.04,
                    0.035,
                    0.04
                },
                {
                    0.11,
                    0.08,
                    0.09
                },
                0.5
            };
            earlySun[] = {-2.5,
                {
                    0.0689,
                    0.0689,
                    0.0804
                },
                {
                    0.06,
                    0.06,
                    0.07
                },
                {
                    0.0689,
                    0.0689,
                    0.0804
                },
                {
                    0.06,
                    0.06,
                    0.07
                },
                {
                    0.08,
                    0.07,
                    0.08
                },
                {
                    0.14,
                    0.1,
                    0.12
                },
                0.5
            };
            earlyMorning[] = {
                3,
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+3.95"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+3.0"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+3.95"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+3.0"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+4"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+5.5"
                },
                1
            };
            morning[] = {
                16,
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+5.7"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+4.5"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+5.7"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+4.5"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+7"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+8"
                },
                1
            };
            lateMorning[] = {
                25,
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+10.45"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+9.75"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+10.45"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+9.75"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+12"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+12.75"
                },
                1
            };
            noon[] = {
                45,
                {
                    {
                        1,
                        1,
                        1
                    },
                    10.0
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    9.0
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    9.0
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    8.0
                },
                {
                    {
                        0.5,
                        0.64,
                        1
                    },
                    12.0
                },
                {
                    {
                        0.5,
                        0.5,
                        0.5
                    },
                    14.8
                },
                1
            };
        };
        class EnvSounds: EnvSounds {
            class Default {
                name = "$STR_CFG_ENVSOUNDS_DEFAULT";
                sound[] = {
                    "$DEFAULT$",
                    0,
                    1
                };
                soundNight[] = {
                    "$DEFAULT$",
                    0,
                    1
                };
            };
            class Rain {
                name = "$STR_DN_RAIN";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.25118864,
                    1,
                    200
                };
                soundNight[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1,
                    200
                };
            };
            class Sea {
                name = "$STR_DN_SEA";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.08912509,
                    1,
                    200
                };
                soundNight[] = {
                    "A3\Sounds_F\dummysound",
                    0.070794575,
                    1,
                    200
                };
                volume = "sea*(1-coast)";
            };
            class Coast {
                name = "$STR_A3_CfgEnvSounds_Coast0";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.08912509,
                    1,
                    200
                };
                soundNight[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    200
                };
                volume = "coast";
            };
            class WindSlow {
                name = "$STR_A3_CfgEnvSounds_WindSlow0";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.019952621,
                    1
                };
                volume = "((windy factor[0,0.25])*(windy factor[0.5, 0.25]))-(night*0.25)";
            };
            class WindMedium {
                name = "$STR_A3_CfgEnvSounds_WindMedium0";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.025118863,
                    1
                };
                volume = "((windy factor[0.33,0.5])*(windy factor[0.8, 0.5]))-(night*0.25)";
            };
            class WindFast {
                name = "$STR_A3_CfgEnvSounds_WindFast0";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.031622775,
                    1
                };
                volume = "(windy factor[0.66,1])-(night*0.25)";
            };
            class Forest {
                name = "$STR_A3_CfgEnvSounds_Forest0";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.017782792,
                    1
                };
                volume = "forest*trees*(1-night)";
                randSamp0[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    12,
                    100,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp1[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    12,
                    100,
                    0.1,
                    10,
                    35,
                    60
                };
                randSamp2[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    12,
                    100,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp3[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    12,
                    100,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp4[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp5[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    80,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp6[] = {
                    "A3\Sounds_F\dummysound",
                    0.031622775,
                    1,
                    20,
                    0.1,
                    10,
                    25,
                    50
                };
                randSamp7[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    40,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp8[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    50,
                    0.1,
                    10,
                    25,
                    40
                };
                random[] = {
                    "randSamp0",
                    "randSamp1",
                    "randSamp2",
                    "randSamp3",
                    "randSamp4",
                    "randSamp5",
                    "randSamp6",
                    "randSamp7",
                    "randSamp8"
                };
            };
            class ForestNight {
                name = "$STR_A3_CfgEnvSounds_ForestNight0";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.011220184,
                    1
                };
                volume = "forest*trees*night";
                randSamp0[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp1[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    35,
                    60
                };
                randSamp2[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp3[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp4[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp5[] = {
                    "A3\Sounds_F\dummysound",
                    0.031622775,
                    1,
                    70,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp6[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    10,
                    0.1,
                    10,
                    25,
                    50
                };
                randSamp7[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    40,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp8[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    30,
                    0.1,
                    10,
                    25,
                    40
                };
                random[] = {
                    "randSamp0",
                    "randSamp1",
                    "randSamp2",
                    "randSamp3",
                    "randSamp4",
                    "randSamp5",
                    "randSamp6",
                    "randSamp7",
                    "randSamp8"
                };
            };
            class Houses {
                name = "$STR_A3_CfgEnvSounds_Houses0";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.01584893,
                    1
                };
                volume = "(houses-0.75)*4";
                randSamp0[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp1[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    35,
                    60
                };
                randSamp2[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp3[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp4[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp5[] = {
                    "A3\Sounds_F\dummysound",
                    0.031622775,
                    1,
                    100,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp6[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    15,
                    0.1,
                    10,
                    25,
                    50
                };
                randSamp7[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    20,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp8[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    25,
                    0.1,
                    10,
                    25,
                    40
                };
                random[] = {
                    "randSamp0",
                    "randSamp1",
                    "randSamp2",
                    "randSamp3",
                    "randSamp4",
                    "randSamp5",
                    "randSamp6",
                    "randSamp7",
                    "randSamp8"
                };
            };
            class HousesNight {
                name = "$STR_A3_CfgEnvSounds_HousesNight0";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.014125374,
                    1
                };
                volume = "(houses-0.75)*4*night";
                randSamp0[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp1[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    35,
                    60
                };
                randSamp2[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp3[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp4[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    80,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp5[] = {
                    "A3\Sounds_F\dummysound",
                    0.031622775,
                    1,
                    80,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp6[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    15,
                    0.1,
                    10,
                    25,
                    50
                };
                randSamp7[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    15,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp8[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    30,
                    0.1,
                    10,
                    25,
                    40
                };
                random[] = {
                    "randSamp0",
                    "randSamp1",
                    "randSamp2",
                    "randSamp3",
                    "randSamp4",
                    "randSamp5",
                    "randSamp6",
                    "randSamp7",
                    "randSamp8"
                };
            };
            class Meadows {
                name = "$STR_A3_CfgEnvSounds_Meadows0";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.01584893,
                    1
                };
                volume = "(1-forest)*(1-houses)*(1-night)*(1-sea)";
                randSamp0[] = {
                    "A3\Sounds_F\dummysound",
                    0.06309573,
                    1,
                    70,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp1[] = {
                    "A3\Sounds_F\dummysound",
                    0.06309573,
                    1,
                    100,
                    0.12,
                    15,
                    25,
                    30
                };
                randSamp2[] = {
                    "A3\Sounds_F\dummysound",
                    0.06309573,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp3[] = {
                    "A3\Sounds_F\dummysound",
                    0.06309573,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp4[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp5[] = {
                    "A3\Sounds_F\dummysound",
                    0.031622775,
                    1,
                    100,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp6[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    20,
                    0.1,
                    10,
                    25,
                    50
                };
                randSamp7[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    20,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp8[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    20,
                    0.1,
                    10,
                    25,
                    40
                };
                random[] = {
                    "randSamp0",
                    "randSamp1",
                    "randSamp2",
                    "randSamp3",
                    "randSamp4",
                    "randSamp5",
                    "randSamp6",
                    "randSamp7",
                    "randSamp8"
                };
            };
            class MeadowsNight {
                name = "$STR_A3_CfgEnvSounds_MeadowsNight0";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.011220184,
                    1
                };
                volume = "(1-forest)*(1-houses)*night*(1-sea)";
                randSamp0[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp1[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    35,
                    60
                };
                randSamp2[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp3[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp4[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    80,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp5[] = {
                    "A3\Sounds_F\dummysound",
                    0.031622775,
                    1,
                    80,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp6[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    20,
                    0.1,
                    10,
                    25,
                    50
                };
                randSamp7[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    20,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp8[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    20,
                    0.1,
                    10,
                    25,
                    40
                };
                random[] = {
                    "randSamp0",
                    "randSamp1",
                    "randSamp2",
                    "randSamp3",
                    "randSamp4",
                    "randSamp5",
                    "randSamp6",
                    "randSamp7",
                    "randSamp8"
                };
            };
            class BattlefieldExplosions {
                sound0[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0,
                    1000,
                    0.2,
                    5,
                    10,
                    15
                };
                sound1[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0,
                    1000,
                    0.2,
                    5,
                    10,
                    15
                };
                sound2[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0,
                    1000,
                    0.2,
                    5,
                    10,
                    15
                };
                sound3[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0,
                    1000,
                    0.2,
                    5,
                    10,
                    15
                };
                sound4[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0,
                    1000,
                    0.2,
                    5,
                    10,
                    15
                };
                random[] = {
                    "sound0",
                    "sound1",
                    "sound2",
                    "sound3",
                    "sound4"
                };
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
            };
            class BattlefieldExplosions1 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldExplosions2 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldExplosions3 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldExplosions4 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldExplosions5 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldFirefight1 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldFirefight2 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldFirefight3 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldFirefight4 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldHeli1 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldHeli2 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldHeli3 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldJet1 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldJet2 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldJet3 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class Earthquake_01 {
                sound[] = {
                    "\A3\Sounds_F\dummysound",
                    3.1622777,
                    1.0
                };
                name = "$STR_A3_SOUNDS_EARTHQUAKE1";
                titles[] = {};
            };
            class Earthquake_02 {
                sound[] = {
                    "\A3\Sounds_F\dummysound",
                    3.1622777,
                    1.0
                };
                name = "$STR_A3_SOUNDS_EARTHQUAKE2";
                titles[] = {};
            };
            class Earthquake_03 {
                sound[] = {
                    "\A3\Sounds_F\dummysound",
                    3.1622777,
                    1.0
                };
                name = "$STR_A3_SOUNDS_EARTHQUAKE3";
                titles[] = {};
            };
            class Earthquake_04 {
                sound[] = {
                    "\A3\Sounds_F\dummysound",
                    3.1622777,
                    1.0
                };
                name = "$STR_A3_SOUNDS_EARTHQUAKE4";
                titles[] = {};
            };
        };
        class Weather: Weather {
            class LightingNew {
                class Lighting0 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = -24;
                    sunOrMoon = 0;
                    diffuse[] = {
                        {
                            0.14,
                            0.19,
                            0.3
                        },
                        4
                    };
                    diffuseCloud[] = {
                        {
                            0.14,
                            0.19,
                            0.3
                        },
                        0.2
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.05
                    };
                    ambientMid[] = {
                        {
                            0.1384,
                            0.1912,
                            0.2984
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.1384,
                            0.1912,
                            0.2984
                        },
                        0.044
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.04224
                    };
                    bidirect[] = {
                        0.025,
                        0.025,
                        0.023
                    };
                    bidirectCloud[] = {
                        0.0125,
                        0.0125,
                        0.0115
                    };
                    sky[] = {
                        0.231,
                        0.314,
                        0.467
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        0.025
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            0.5,
                            0.65,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting1 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = -12;
                    sunOrMoon = 0;
                    diffuse[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    diffuseCloud[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        {
                            0.094,
                            0.141,
                            0.231
                        },
                        0.025
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting2 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = -11;
                    sunOrMoon = 0.5;
                    diffuse[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    diffuseCloud[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        {
                            0.094,
                            0.141,
                            0.231
                        },
                        0.025
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting3 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = -10;
                    sunOrMoon = 1;
                    diffuse[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    diffuseCloud[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        {
                            0.2,
                            0.25,
                            0.45
                        },
                        4.734908
                    };
                    fogColor[] = {
                        {
                            0.094,
                            0.141,
                            0.231
                        },
                        0.025
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting4 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = -5;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.16,
                            0.18,
                            0.28
                        },
                        3
                    };
                    diffuseCloud[] = {
                        {
                            0.16,
                            0.18,
                            0.28
                        },
                        3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.6
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.6
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.048
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.048
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        3.88608
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        3.88608
                    };
                    bidirect[] = {
                        0.0115,
                        0.012,
                        0.0125
                    };
                    bidirectCloud[] = {
                        0.0115,
                        0.012,
                        0.0125
                    };
                    sky[] = {
                        {
                            0.2,
                            0.298,
                            0.541
                        },
                        4.6
                    };
                    skyAroundSun[] = {
                        {
                            0.7,
                            0.35,
                            0.28
                        },
                        7.636949
                    };
                    fogColor[] = {
                        {
                            0.106,
                            0.161,
                            0.267
                        },
                        4.715
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting5 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = -2;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.25,
                            0.21,
                            0.2
                        },
                        5
                    };
                    diffuseCloud[] = {
                        {
                            0.25,
                            0.21,
                            0.2
                        },
                        5
                    };
                    ambient[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.9
                    };
                    ambientCloud[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.9
                    };
                    ambientMid[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.072
                    };
                    ambientMidCloud[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.072
                    };
                    groundReflection[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        5.82912
                    };
                    groundReflectionCloud[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        5.82912
                    };
                    bidirect[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    bidirectCloud[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    sky[] = {
                        {
                            0.188,
                            0.29,
                            0.576
                        },
                        6.9
                    };
                    skyAroundSun[] = {
                        {
                            1.8,
                            0.42,
                            0.2
                        },
                        12.31766
                    };
                    fogColor[] = {
                        {
                            0.11,
                            0.169,
                            0.286
                        },
                        7.0725
                    };
                    apertureMin = 7;
                    apertureStandard = 8;
                    apertureMax = 20;
                    standardAvgLum = 20;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting6 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = 0;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.75,
                            0.38,
                            0.22
                        },
                        6
                    };
                    diffuseCloud[] = {
                        {
                            0.75,
                            0.38,
                            0.22
                        },
                        6
                    };
                    ambient[] = {
                        {
                            0.2497,
                            0.31,
                            0.467
                        },
                        7.8
                    };
                    ambientCloud[] = {
                        {
                            0.2497,
                            0.31,
                            0.467
                        },
                        7.8
                    };
                    ambientMid[] = {
                        {
                            0.2541,
                            0.314,
                            0.467
                        },
                        6.864
                    };
                    ambientMidCloud[] = {
                        {
                            0.2541,
                            0.314,
                            0.467
                        },
                        6.864
                    };
                    groundReflection[] = {
                        {
                            0.235,
                            0.318,
                            0.467
                        },
                        6.58944
                    };
                    groundReflectionCloud[] = {
                        {
                            0.235,
                            0.318,
                            0.467
                        },
                        6.58944
                    };
                    bidirect[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    bidirectCloud[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    sky[] = {
                        {
                            0.173,
                            0.282,
                            0.612
                        },
                        7.8
                    };
                    skyAroundSun[] = {
                        {
                            2,
                            0.42,
                            0.2
                        },
                        13.38876
                    };
                    fogColor[] = {
                        {
                            0.118,
                            0.18,
                            0.31
                        },
                        7.995
                    };
                    apertureMin = 8;
                    apertureStandard = 9;
                    apertureMax = 22;
                    standardAvgLum = 45;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting7 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = 2;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.95,
                            0.42,
                            0.22
                        },
                        8.4
                    };
                    diffuseCloud[] = {
                        {
                            0.95,
                            0.42,
                            0.22
                        },
                        8.4
                    };
                    ambient[] = {
                        {
                            0.306,
                            0.357,
                            0.463
                        },
                        8.4
                    };
                    ambientCloud[] = {
                        {
                            0.306,
                            0.357,
                            0.463
                        },
                        8.4
                    };
                    ambientMid[] = {
                        {
                            0.365,
                            0.361,
                            0.396
                        },
                        7.392
                    };
                    ambientMidCloud[] = {
                        {
                            0.365,
                            0.361,
                            0.396
                        },
                        7.392
                    };
                    groundReflection[] = {
                        {
                            0.416,
                            0.38,
                            0.388
                        },
                        7.09632
                    };
                    groundReflectionCloud[] = {
                        {
                            0.416,
                            0.38,
                            0.388
                        },
                        7.09632
                    };
                    bidirect[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    bidirectCloud[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    sky[] = {
                        {
                            0.157,
                            0.275,
                            0.651
                        },
                        8.4
                    };
                    skyAroundSun[] = {
                        {
                            2.2,
                            0.8,
                            0.2
                        },
                        13.38876
                    };
                    fogColor[] = {
                        {
                            0.125,
                            0.192,
                            0.329
                        },
                        8.61
                    };
                    apertureMin = 8;
                    apertureStandard = 10;
                    apertureMax = 24;
                    standardAvgLum = 50;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting8 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = 6;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.95,
                            0.55,
                            0.35
                        },
                        10.2
                    };
                    diffuseCloud[] = {
                        {
                            0.95,
                            0.55,
                            0.35
                        },
                        10.2
                    };
                    ambient[] = {
                        {
                            0.337,
                            0.404,
                            0.525
                        },
                        9.6
                    };
                    ambientCloud[] = {
                        {
                            0.337,
                            0.404,
                            0.525
                        },
                        9.6
                    };
                    ambientMid[] = {
                        {
                            0.412,
                            0.408,
                            0.443
                        },
                        8.448
                    };
                    ambientMidCloud[] = {
                        {
                            0.412,
                            0.408,
                            0.443
                        },
                        8.448
                    };
                    groundReflection[] = {
                        {
                            0.475,
                            0.435,
                            0.431
                        },
                        8.11008
                    };
                    groundReflectionCloud[] = {
                        {
                            0.475,
                            0.435,
                            0.431
                        },
                        8.11008
                    };
                    bidirect[] = {
                        0.01375,
                        0.0132,
                        0.01265
                    };
                    bidirectCloud[] = {
                        0.01375,
                        0.0132,
                        0.01265
                    };
                    sky[] = {
                        {
                            0.145,
                            0.263,
                            0.686
                        },
                        9.6
                    };
                    skyAroundSun[] = {
                        {
                            0.4,
                            0.32,
                            0.6
                        },
                        13.38876
                    };
                    fogColor[] = {
                        {
                            0.133,
                            0.204,
                            0.357
                        },
                        9.84
                    };
                    apertureMin = 8;
                    apertureStandard = 16;
                    apertureMax = 26;
                    standardAvgLum = 100;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.027,
                        0.045
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting9 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = 12;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.65,
                            0.45
                        },
                        12.3
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.65,
                            0.45
                        },
                        12.3
                    };
                    ambient[] = {
                        {
                            0.388,
                            0.471,
                            0.612
                        },
                        10.9
                    };
                    ambientCloud[] = {
                        {
                            0.388,
                            0.471,
                            0.612
                        },
                        10.9
                    };
                    ambientMid[] = {
                        {
                            0.482,
                            0.475,
                            0.506
                        },
                        9.81
                    };
                    ambientMidCloud[] = {
                        {
                            0.482,
                            0.475,
                            0.506
                        },
                        9.81
                    };
                    groundReflection[] = {
                        {
                            0.557,
                            0.51,
                            0.494
                        },
                        9.4176
                    };
                    groundReflectionCloud[] = {
                        {
                            0.557,
                            0.51,
                            0.494
                        },
                        9.4176
                    };
                    bidirect[] = {
                        0.01875,
                        0.018,
                        0.01725
                    };
                    bidirectCloud[] = {
                        0.01875,
                        0.018,
                        0.01725
                    };
                    sky[] = {
                        {
                            0.129,
                            0.259,
                            0.722
                        },
                        10.9
                    };
                    skyAroundSun[] = {
                        {
                            0.13,
                            0.25,
                            0.8
                        },
                        13.524
                    };
                    fogColor[] = {
                        {
                            0.145,
                            0.224,
                            0.396
                        },
                        11.1725
                    };
                    apertureMin = 20;
                    apertureStandard = 25;
                    apertureMax = 35;
                    standardAvgLum = 250;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.018,
                        0.04
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        12.24
                    };
                    swBrightness = 1;
                };
                class Lighting10 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = 24;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.75,
                            0.62
                        },
                        15.8
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.75,
                            0.62
                        },
                        15.8
                    };
                    ambient[] = {
                        {
                            0.435,
                            0.533,
                            0.698
                        },
                        13.8
                    };
                    ambientCloud[] = {
                        {
                            0.435,
                            0.533,
                            0.698
                        },
                        13.8
                    };
                    ambientMid[] = {
                        {
                            0.545,
                            0.541,
                            0.569
                        },
                        12.696
                    };
                    ambientMidCloud[] = {
                        {
                            0.545,
                            0.541,
                            0.569
                        },
                        12.696
                    };
                    groundReflection[] = {
                        {
                            0.635,
                            0.58,
                            0.557
                        },
                        12.18816
                    };
                    groundReflectionCloud[] = {
                        {
                            0.635,
                            0.58,
                            0.557
                        },
                        12.18816
                    };
                    bidirect[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    bidirectCloud[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    sky[] = {
                        {
                            0.118,
                            0.251,
                            0.753
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.115,
                            0.245,
                            0.8
                        },
                        13.662
                    };
                    fogColor[] = {
                        {
                            0.15,
                            0.251,
                            0.488
                        },
                        14.145
                    };
                    apertureMin = 45;
                    apertureStandard = 60;
                    apertureMax = 80;
                    standardAvgLum = 800;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.4
                    };
                    swBrightness = 1;
                };
                class Lighting11 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = 45;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        17.2
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        17.2
                    };
                    ambient[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientCloud[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientMid[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        14.504
                    };
                    ambientMidCloud[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        14.504
                    };
                    groundReflection[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.21392
                    };
                    groundReflectionCloud[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.21392
                    };
                    bidirect[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    bidirectCloud[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    sky[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.3,
                            0.44,
                            0.74
                        },
                        15
                    };
                    apertureMin = 70;
                    apertureStandard = 120;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
                class Lighting12 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = 90;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        17.2
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        17.2
                    };
                    ambient[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientCloud[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientMid[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        14.504
                    };
                    ambientMidCloud[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        14.504
                    };
                    groundReflection[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.21392
                    };
                    groundReflectionCloud[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.21392
                    };
                    bidirect[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    bidirectCloud[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    sky[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.3,
                            0.44,
                            0.74
                        },
                        15
                    };
                    apertureMin = 70;
                    apertureStandard = 120;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
                class Lighting13 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = -24;
                    sunOrMoon = 0;
                    diffuse[] = {
                        {
                            0.14,
                            0.19,
                            0.3
                        },
                        4
                    };
                    diffuseCloud[] = {
                        {
                            0.14,
                            0.19,
                            0.3
                        },
                        3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.1384,
                            0.1912,
                            0.2984
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.1384,
                            0.1912,
                            0.2984
                        },
                        0.88
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    bidirect[] = {
                        0.025,
                        0.025,
                        0.023
                    };
                    bidirectCloud[] = {
                        0.0245,
                        0.0245,
                        0.02254
                    };
                    sky[] = {
                        0.231,
                        0.314,
                        0.467
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        0.025
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            0.5,
                            0.65,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting14 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = -12;
                    sunOrMoon = 0;
                    diffuse[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    diffuseCloud[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        {
                            0.094,
                            0.141,
                            0.231
                        },
                        0.025
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting15 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = -11;
                    sunOrMoon = 0.5;
                    diffuse[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    diffuseCloud[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        {
                            0.094,
                            0.141,
                            0.231
                        },
                        0.025
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting16 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = -10;
                    sunOrMoon = 1;
                    diffuse[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    diffuseCloud[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        {
                            0.2,
                            0.25,
                            0.45
                        },
                        4.734908
                    };
                    fogColor[] = {
                        {
                            0.094,
                            0.141,
                            0.231
                        },
                        0.025
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting17 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = -5;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.16,
                            0.18,
                            0.28
                        },
                        2.25
                    };
                    diffuseCloud[] = {
                        {
                            0.16,
                            0.18,
                            0.28
                        },
                        1.6875
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.6
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.6
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.048
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.048
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        3.88608
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        3.88608
                    };
                    bidirect[] = {
                        0.0115,
                        0.012,
                        0.0125
                    };
                    bidirectCloud[] = {
                        0.01127,
                        0.01176,
                        0.01225
                    };
                    sky[] = {
                        {
                            0.2,
                            0.298,
                            0.541
                        },
                        4.6
                    };
                    skyAroundSun[] = {
                        {
                            0.7,
                            0.35,
                            0.28
                        },
                        7.636949
                    };
                    fogColor[] = {
                        {
                            0.106,
                            0.161,
                            0.267
                        },
                        4.715
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting18 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = -2;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.25,
                            0.21,
                            0.2
                        },
                        3.75
                    };
                    diffuseCloud[] = {
                        {
                            0.25,
                            0.21,
                            0.2
                        },
                        2.8125
                    };
                    ambient[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.9
                    };
                    ambientCloud[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.9
                    };
                    ambientMid[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.072
                    };
                    ambientMidCloud[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.072
                    };
                    groundReflection[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        5.82912
                    };
                    groundReflectionCloud[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        5.82912
                    };
                    bidirect[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    bidirectCloud[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    sky[] = {
                        {
                            0.188,
                            0.29,
                            0.576
                        },
                        6.9
                    };
                    skyAroundSun[] = {
                        {
                            1.8,
                            0.42,
                            0.2
                        },
                        12.31766
                    };
                    fogColor[] = {
                        {
                            0.11,
                            0.169,
                            0.286
                        },
                        7.0725
                    };
                    apertureMin = 7;
                    apertureStandard = 8;
                    apertureMax = 20;
                    standardAvgLum = 20;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting19 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = 0;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.75,
                            0.38,
                            0.22
                        },
                        4.5
                    };
                    diffuseCloud[] = {
                        {
                            0.75,
                            0.38,
                            0.22
                        },
                        3.375
                    };
                    ambient[] = {
                        {
                            0.2497,
                            0.31,
                            0.467
                        },
                        7.8
                    };
                    ambientCloud[] = {
                        {
                            0.2497,
                            0.31,
                            0.467
                        },
                        7.8
                    };
                    ambientMid[] = {
                        {
                            0.2541,
                            0.314,
                            0.467
                        },
                        6.864
                    };
                    ambientMidCloud[] = {
                        {
                            0.2541,
                            0.314,
                            0.467
                        },
                        6.864
                    };
                    groundReflection[] = {
                        {
                            0.235,
                            0.318,
                            0.467
                        },
                        6.58944
                    };
                    groundReflectionCloud[] = {
                        {
                            0.235,
                            0.318,
                            0.467
                        },
                        6.58944
                    };
                    bidirect[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    bidirectCloud[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    sky[] = {
                        {
                            0.173,
                            0.282,
                            0.612
                        },
                        7.8
                    };
                    skyAroundSun[] = {
                        {
                            2,
                            0.42,
                            0.2
                        },
                        13.38876
                    };
                    fogColor[] = {
                        {
                            0.118,
                            0.18,
                            0.31
                        },
                        7.995
                    };
                    apertureMin = 8;
                    apertureStandard = 9;
                    apertureMax = 22;
                    standardAvgLum = 45;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting20 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = 2;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.95,
                            0.42,
                            0.22
                        },
                        6.72
                    };
                    diffuseCloud[] = {
                        {
                            0.95,
                            0.42,
                            0.22
                        },
                        5.04
                    };
                    ambient[] = {
                        {
                            0.306,
                            0.357,
                            0.463
                        },
                        8.4
                    };
                    ambientCloud[] = {
                        {
                            0.306,
                            0.357,
                            0.463
                        },
                        8.4
                    };
                    ambientMid[] = {
                        {
                            0.365,
                            0.361,
                            0.396
                        },
                        7.392
                    };
                    ambientMidCloud[] = {
                        {
                            0.365,
                            0.361,
                            0.396
                        },
                        7.392
                    };
                    groundReflection[] = {
                        {
                            0.416,
                            0.38,
                            0.388
                        },
                        7.09632
                    };
                    groundReflectionCloud[] = {
                        {
                            0.416,
                            0.38,
                            0.388
                        },
                        7.09632
                    };
                    bidirect[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    bidirectCloud[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    sky[] = {
                        {
                            0.157,
                            0.275,
                            0.651
                        },
                        8.4
                    };
                    skyAroundSun[] = {
                        {
                            2.2,
                            0.8,
                            0.2
                        },
                        13.38876
                    };
                    fogColor[] = {
                        {
                            0.125,
                            0.192,
                            0.329
                        },
                        8.61
                    };
                    apertureMin = 8;
                    apertureStandard = 10;
                    apertureMax = 24;
                    standardAvgLum = 50;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting21 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = 6;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.95,
                            0.55,
                            0.35
                        },
                        10.2
                    };
                    diffuseCloud[] = {
                        {
                            0.95,
                            0.55,
                            0.35
                        },
                        7.65
                    };
                    ambient[] = {
                        {
                            0.337,
                            0.404,
                            0.525
                        },
                        9.6
                    };
                    ambientCloud[] = {
                        {
                            0.337,
                            0.404,
                            0.525
                        },
                        9.6
                    };
                    ambientMid[] = {
                        {
                            0.412,
                            0.408,
                            0.443
                        },
                        8.448
                    };
                    ambientMidCloud[] = {
                        {
                            0.412,
                            0.408,
                            0.443
                        },
                        8.448
                    };
                    groundReflection[] = {
                        {
                            0.475,
                            0.435,
                            0.431
                        },
                        8.11008
                    };
                    groundReflectionCloud[] = {
                        {
                            0.475,
                            0.435,
                            0.431
                        },
                        8.11008
                    };
                    bidirect[] = {
                        0.01375,
                        0.0132,
                        0.01265
                    };
                    bidirectCloud[] = {
                        0.01375,
                        0.0132,
                        0.01265
                    };
                    sky[] = {
                        {
                            0.145,
                            0.263,
                            0.686
                        },
                        9.6
                    };
                    skyAroundSun[] = {
                        {
                            0.4,
                            0.32,
                            0.6
                        },
                        13.38876
                    };
                    fogColor[] = {
                        {
                            0.133,
                            0.204,
                            0.357
                        },
                        9.84
                    };
                    apertureMin = 8;
                    apertureStandard = 16;
                    apertureMax = 26;
                    standardAvgLum = 100;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.027,
                        0.045
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting22 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = 12;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.65,
                            0.45
                        },
                        12.3
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.65,
                            0.45
                        },
                        9.225
                    };
                    ambient[] = {
                        {
                            0.388,
                            0.471,
                            0.612
                        },
                        10.9
                    };
                    ambientCloud[] = {
                        {
                            0.388,
                            0.471,
                            0.612
                        },
                        10.9
                    };
                    ambientMid[] = {
                        {
                            0.482,
                            0.475,
                            0.506
                        },
                        9.81
                    };
                    ambientMidCloud[] = {
                        {
                            0.482,
                            0.475,
                            0.506
                        },
                        9.81
                    };
                    groundReflection[] = {
                        {
                            0.557,
                            0.51,
                            0.494
                        },
                        9.4176
                    };
                    groundReflectionCloud[] = {
                        {
                            0.557,
                            0.51,
                            0.494
                        },
                        9.4176
                    };
                    bidirect[] = {
                        0.01875,
                        0.018,
                        0.01725
                    };
                    bidirectCloud[] = {
                        0.01875,
                        0.018,
                        0.01725
                    };
                    sky[] = {
                        {
                            0.129,
                            0.259,
                            0.722
                        },
                        10.9
                    };
                    skyAroundSun[] = {
                        {
                            0.13,
                            0.25,
                            0.8
                        },
                        13.524
                    };
                    fogColor[] = {
                        {
                            0.145,
                            0.224,
                            0.396
                        },
                        11.1725
                    };
                    apertureMin = 20;
                    apertureStandard = 25;
                    apertureMax = 35;
                    standardAvgLum = 250;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.018,
                        0.04
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        12.24
                    };
                    swBrightness = 1;
                };
                class Lighting23 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = 24;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.75,
                            0.62
                        },
                        15.8
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.75,
                            0.62
                        },
                        11.85
                    };
                    ambient[] = {
                        {
                            0.435,
                            0.533,
                            0.698
                        },
                        13.8
                    };
                    ambientCloud[] = {
                        {
                            0.435,
                            0.533,
                            0.698
                        },
                        13.8
                    };
                    ambientMid[] = {
                        {
                            0.545,
                            0.541,
                            0.569
                        },
                        12.696
                    };
                    ambientMidCloud[] = {
                        {
                            0.545,
                            0.541,
                            0.569
                        },
                        12.696
                    };
                    groundReflection[] = {
                        {
                            0.635,
                            0.58,
                            0.557
                        },
                        12.18816
                    };
                    groundReflectionCloud[] = {
                        {
                            0.635,
                            0.58,
                            0.557
                        },
                        12.18816
                    };
                    bidirect[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    bidirectCloud[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    sky[] = {
                        {
                            0.118,
                            0.251,
                            0.753
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.115,
                            0.245,
                            0.8
                        },
                        13.662
                    };
                    fogColor[] = {
                        {
                            0.15,
                            0.251,
                            0.488
                        },
                        14.145
                    };
                    apertureMin = 45;
                    apertureStandard = 60;
                    apertureMax = 80;
                    standardAvgLum = 800;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.4
                    };
                    swBrightness = 1;
                };
                class Lighting24 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = 45;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        17
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        12.75
                    };
                    ambient[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientCloud[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientMid[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        13.616
                    };
                    ambientMidCloud[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        13.616
                    };
                    groundReflection[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.21392
                    };
                    groundReflectionCloud[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.21392
                    };
                    bidirect[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    bidirectCloud[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    sky[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.3,
                            0.44,
                            0.74
                        },
                        13.9564
                    };
                    apertureMin = 70;
                    apertureStandard = 120;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
                class Lighting25 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = 90;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        17
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        13.94
                    };
                    ambient[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientCloud[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientMid[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        14.504
                    };
                    ambientMidCloud[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        14.504
                    };
                    groundReflection[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.21392
                    };
                    groundReflectionCloud[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.21392
                    };
                    bidirect[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    bidirectCloud[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    sky[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.3,
                            0.44,
                            0.74
                        },
                        15
                    };
                    apertureMin = 70;
                    apertureStandard = 120;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
                class Lighting26 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = -24;
                    sunOrMoon = 0;
                    diffuse[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        1
                    };
                    diffuseCloud[] = {
                        {
                            0,
                            0,
                            0
                        },
                        0.75
                    };
                    ambient[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        0.8624
                    };
                    ambientMidCloud[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        0.8624
                    };
                    groundReflection[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        0.758912
                    };
                    groundReflectionCloud[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        0.758912
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        0.231,
                        0.314,
                        0.467
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        0.09,
                        0.137,
                        0.22
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting27 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = -12;
                    sunOrMoon = 0;
                    diffuse[] = {
                        0.16954,
                        0.239,
                        0.37673
                    };
                    diffuseCloud[] = {
                        0.042385,
                        0.05975,
                        0.094183
                    };
                    ambient[] = {
                        {
                            0.16954,
                            0.239,
                            0.37673
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.16954,
                            0.239,
                            0.37673
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8624
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8624
                    };
                    groundReflection[] = {
                        {
                            0.14705,
                            0.20315,
                            0.31705
                        },
                        0.758912
                    };
                    groundReflectionCloud[] = {
                        {
                            0.14705,
                            0.20315,
                            0.31705
                        },
                        0.758912
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        0.122,
                        0.169,
                        0.255
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting28 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = -11;
                    sunOrMoon = 0.5;
                    diffuse[] = {
                        0.129,
                        0.18,
                        0.271
                    };
                    diffuseCloud[] = {
                        0.03225,
                        0.045,
                        0.06775
                    };
                    ambient[] = {
                        {
                            0.129,
                            0.18,
                            0.271
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.129,
                            0.18,
                            0.271
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.129,
                            0.184,
                            0.267
                        },
                        0.8624
                    };
                    ambientMidCloud[] = {
                        {
                            0.129,
                            0.184,
                            0.267
                        },
                        0.8624
                    };
                    groundReflection[] = {
                        {
                            0.125,
                            0.176,
                            0.263
                        },
                        0.758912
                    };
                    groundReflectionCloud[] = {
                        {
                            0.125,
                            0.176,
                            0.263
                        },
                        0.758912
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        0.122,
                        0.169,
                        0.255
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting29 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = -10;
                    sunOrMoon = 1;
                    diffuse[] = {
                        0.129,
                        0.18,
                        0.271
                    };
                    diffuseCloud[] = {
                        0.03225,
                        0.045,
                        0.06775
                    };
                    ambient[] = {
                        {
                            0.129,
                            0.18,
                            0.271
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.129,
                            0.18,
                            0.271
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.129,
                            0.184,
                            0.267
                        },
                        0.8624
                    };
                    ambientMidCloud[] = {
                        {
                            0.129,
                            0.184,
                            0.267
                        },
                        0.8624
                    };
                    groundReflection[] = {
                        {
                            0.125,
                            0.176,
                            0.263
                        },
                        0.758912
                    };
                    groundReflectionCloud[] = {
                        {
                            0.125,
                            0.176,
                            0.263
                        },
                        0.758912
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        {
                            0.2,
                            0.25,
                            0.45
                        },
                        4.734908
                    };
                    fogColor[] = {
                        0.122,
                        0.169,
                        0.255
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting30 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = -5;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.157,
                            0.212,
                            0.306
                        },
                        0.5625
                    };
                    diffuseCloud[] = {
                        {
                            0.03925,
                            0.053,
                            0.0765
                        },
                        0.39375
                    };
                    ambient[] = {
                        {
                            0.157,
                            0.212,
                            0.306
                        },
                        3.22
                    };
                    ambientCloud[] = {
                        {
                            0.157,
                            0.212,
                            0.306
                        },
                        3.22
                    };
                    ambientMid[] = {
                        {
                            0.157,
                            0.208,
                            0.298
                        },
                        3.96704
                    };
                    ambientMidCloud[] = {
                        {
                            0.157,
                            0.208,
                            0.298
                        },
                        3.96704
                    };
                    groundReflection[] = {
                        {
                            0.149,
                            0.204,
                            0.29
                        },
                        3.649677
                    };
                    groundReflectionCloud[] = {
                        {
                            0.149,
                            0.204,
                            0.29
                        },
                        3.649677
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.2,
                            0.298,
                            0.541
                        },
                        4.6
                    };
                    skyAroundSun[] = {
                        {
                            0.7,
                            0.35,
                            0.28
                        },
                        7.636949
                    };
                    fogColor[] = {
                        {
                            0.141,
                            0.192,
                            0.282
                        },
                        3.96704
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting31 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = -2;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.184,
                            0.247,
                            0.341
                        },
                        0.9375
                    };
                    diffuseCloud[] = {
                        {
                            0.046,
                            0.06175,
                            0.08525
                        },
                        0.65625
                    };
                    ambient[] = {
                        {
                            0.184,
                            0.247,
                            0.341
                        },
                        6.9
                    };
                    ambientCloud[] = {
                        {
                            0.184,
                            0.247,
                            0.341
                        },
                        6.9
                    };
                    ambientMid[] = {
                        {
                            0.184,
                            0.243,
                            0.329
                        },
                        5.95056
                    };
                    ambientMidCloud[] = {
                        {
                            0.184,
                            0.243,
                            0.329
                        },
                        5.95056
                    };
                    groundReflection[] = {
                        {
                            0.176,
                            0.231,
                            0.322
                        },
                        5.593526
                    };
                    groundReflectionCloud[] = {
                        {
                            0.176,
                            0.231,
                            0.322
                        },
                        5.593526
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.188,
                            0.29,
                            0.576
                        },
                        6.9
                    };
                    skyAroundSun[] = {
                        {
                            1.8,
                            0.42,
                            0.2
                        },
                        12.31766
                    };
                    fogColor[] = {
                        {
                            0.165,
                            0.22,
                            0.31
                        },
                        5.95056
                    };
                    apertureMin = 7;
                    apertureStandard = 7;
                    apertureMax = 20;
                    standardAvgLum = 20;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting32 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = 0;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.216,
                            0.286,
                            0.384
                        },
                        1.125
                    };
                    diffuseCloud[] = {
                        {
                            0.054,
                            0.0715,
                            0.096
                        },
                        0.7875
                    };
                    ambient[] = {
                        {
                            0.216,
                            0.286,
                            0.384
                        },
                        7.8
                    };
                    ambientCloud[] = {
                        {
                            0.216,
                            0.286,
                            0.384
                        },
                        7.8
                    };
                    ambientMid[] = {
                        {
                            0.22,
                            0.278,
                            0.365
                        },
                        6.72672
                    };
                    ambientMidCloud[] = {
                        {
                            0.22,
                            0.278,
                            0.365
                        },
                        6.72672
                    };
                    groundReflection[] = {
                        {
                            0.204,
                            0.267,
                            0.353
                        },
                        6.457651
                    };
                    groundReflectionCloud[] = {
                        {
                            0.204,
                            0.267,
                            0.353
                        },
                        6.457651
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.173,
                            0.282,
                            0.612
                        },
                        7.8
                    };
                    skyAroundSun[] = {
                        {
                            2,
                            0.42,
                            0.2
                        },
                        13.38876
                    };
                    fogColor[] = {
                        {
                            0.188,
                            0.247,
                            0.341
                        },
                        6.72672
                    };
                    apertureMin = 8;
                    apertureStandard = 8;
                    apertureMax = 22;
                    standardAvgLum = 45;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting33 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = 2;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.255,
                            0.325,
                            0.42
                        },
                        1.68
                    };
                    diffuseCloud[] = {
                        {
                            0.06375,
                            0.08125,
                            0.105
                        },
                        1.176
                    };
                    ambient[] = {
                        {
                            0.255,
                            0.325,
                            0.42
                        },
                        8.4
                    };
                    ambientCloud[] = {
                        {
                            0.255,
                            0.325,
                            0.42
                        },
                        8.4
                    };
                    ambientMid[] = {
                        {
                            0.259,
                            0.314,
                            0.396
                        },
                        7.24416
                    };
                    ambientMidCloud[] = {
                        {
                            0.259,
                            0.314,
                            0.396
                        },
                        7.24416
                    };
                    groundReflection[] = {
                        {
                            0.239,
                            0.294,
                            0.376
                        },
                        7.099277
                    };
                    groundReflectionCloud[] = {
                        {
                            0.239,
                            0.294,
                            0.376
                        },
                        7.099277
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.157,
                            0.275,
                            0.651
                        },
                        8.4
                    };
                    skyAroundSun[] = {
                        {
                            2.2,
                            0.8,
                            0.2
                        },
                        13.38876
                    };
                    fogColor[] = {
                        {
                            0.216,
                            0.275,
                            0.373
                        },
                        7.24416
                    };
                    apertureMin = 8;
                    apertureStandard = 8;
                    apertureMax = 24;
                    standardAvgLum = 50;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting34 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = 6;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.298,
                            0.365,
                            0.451
                        },
                        2.55
                    };
                    diffuseCloud[] = {
                        {
                            0.0745,
                            0.09125,
                            0.11275
                        },
                        1.785
                    };
                    ambient[] = {
                        {
                            0.298,
                            0.365,
                            0.451
                        },
                        9.6
                    };
                    ambientCloud[] = {
                        {
                            0.298,
                            0.365,
                            0.451
                        },
                        9.6
                    };
                    ambientMid[] = {
                        {
                            0.302,
                            0.349,
                            0.416
                        },
                        8.27904
                    };
                    ambientMidCloud[] = {
                        {
                            0.302,
                            0.349,
                            0.416
                        },
                        8.27904
                    };
                    groundReflection[] = {
                        {
                            0.275,
                            0.318,
                            0.384
                        },
                        8.11346
                    };
                    groundReflectionCloud[] = {
                        {
                            0.275,
                            0.318,
                            0.384
                        },
                        8.11346
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.145,
                            0.263,
                            0.686
                        },
                        9.6
                    };
                    skyAroundSun[] = {
                        {
                            0.4,
                            0.32,
                            0.6
                        },
                        13.38876
                    };
                    fogColor[] = {
                        {
                            0.243,
                            0.306,
                            0.408
                        },
                        8.27904
                    };
                    apertureMin = 8;
                    apertureStandard = 14;
                    apertureMax = 26;
                    standardAvgLum = 100;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.027,
                        0.045
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting35 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = 12;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.376,
                            0.431,
                            0.506
                        },
                        3.075
                    };
                    diffuseCloud[] = {
                        {
                            0.094,
                            0.10775,
                            0.1265
                        },
                        2.1525
                    };
                    ambient[] = {
                        {
                            0.376,
                            0.431,
                            0.506
                        },
                        10.9
                    };
                    ambientCloud[] = {
                        {
                            0.376,
                            0.431,
                            0.506
                        },
                        10.9
                    };
                    ambientMid[] = {
                        {
                            0.38,
                            0.408,
                            0.447
                        },
                        9.6138
                    };
                    ambientMidCloud[] = {
                        {
                            0.38,
                            0.408,
                            0.447
                        },
                        9.6138
                    };
                    groundReflection[] = {
                        {
                            0.329,
                            0.361,
                            0.396
                        },
                        9.421524
                    };
                    groundReflectionCloud[] = {
                        {
                            0.329,
                            0.361,
                            0.396
                        },
                        9.421524
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.129,
                            0.259,
                            0.722
                        },
                        10.9
                    };
                    skyAroundSun[] = {
                        {
                            0.13,
                            0.25,
                            0.8
                        },
                        13.524
                    };
                    fogColor[] = {
                        {
                            0.286,
                            0.353,
                            0.463
                        },
                        9.6138
                    };
                    apertureMin = 20;
                    apertureStandard = 22;
                    apertureMax = 35;
                    standardAvgLum = 250;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.018,
                        0.04
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        12.24
                    };
                    swBrightness = 1;
                };
                class Lighting36 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = 24;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.447,
                            0.494,
                            0.557
                        },
                        3.95
                    };
                    diffuseCloud[] = {
                        {
                            0,
                            0,
                            0
                        },
                        2.765
                    };
                    ambient[] = {
                        {
                            0.447,
                            0.494,
                            0.557
                        },
                        13.8
                    };
                    ambientCloud[] = {
                        {
                            0.447,
                            0.494,
                            0.557
                        },
                        13.8
                    };
                    ambientMid[] = {
                        {
                            0.455,
                            0.467,
                            0.475
                        },
                        12.44208
                    };
                    ambientMidCloud[] = {
                        {
                            0.455,
                            0.467,
                            0.475
                        },
                        12.44208
                    };
                    groundReflection[] = {
                        {
                            0.388,
                            0.396,
                            0.408
                        },
                        12.19324
                    };
                    groundReflectionCloud[] = {
                        {
                            0.388,
                            0.396,
                            0.408
                        },
                        12.19324
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.118,
                            0.251,
                            0.753
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.115,
                            0.245,
                            0.8
                        },
                        13.662
                    };
                    fogColor[] = {
                        {
                            0.333,
                            0.404,
                            0.518
                        },
                        12.44208
                    };
                    apertureMin = 45;
                    apertureStandard = 50;
                    apertureMax = 80;
                    standardAvgLum = 800;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.4
                    };
                    swBrightness = 1;
                };
                class Lighting37 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = 45;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.506,
                            0.553,
                            0.608
                        },
                        4.25
                    };
                    diffuseCloud[] = {
                        0.1265,
                        0.13825,
                        0.152
                    };
                    ambient[] = {
                        {
                            0.506,
                            0.553,
                            0.608
                        },
                        14.8
                    };
                    ambientCloud[] = {
                        {
                            0.506,
                            0.553,
                            0.608
                        },
                        14.8
                    };
                    ambientMid[] = {
                        {
                            0.514,
                            0.518,
                            0.514
                        },
                        13.34368
                    };
                    ambientMidCloud[] = {
                        {
                            0.514,
                            0.518,
                            0.514
                        },
                        13.34368
                    };
                    groundReflection[] = {
                        {
                            0.435,
                            0.439,
                            0.439
                        },
                        13.07681
                    };
                    groundReflectionCloud[] = {
                        {
                            0.435,
                            0.439,
                            0.439
                        },
                        13.07681
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.369,
                            0.447,
                            0.565
                        },
                        13.34368
                    };
                    apertureMin = 70;
                    apertureStandard = 100;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
                class Lighting38 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = 90;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.549,
                            0.596,
                            0.651
                        },
                        4.25
                    };
                    diffuseCloud[] = {
                        0.13725,
                        0.149,
                        0.16275
                    };
                    ambient[] = {
                        {
                            0.549,
                            0.596,
                            0.651
                        },
                        14.8
                    };
                    ambientCloud[] = {
                        {
                            0.549,
                            0.596,
                            0.651
                        },
                        14.8
                    };
                    ambientMid[] = {
                        {
                            0.557,
                            0.557,
                            0.585
                        },
                        14.21392
                    };
                    ambientMidCloud[] = {
                        {
                            0.557,
                            0.557,
                            0.585
                        },
                        14.21392
                    };
                    groundReflection[] = {
                        {
                            0.471,
                            0.471,
                            0.463
                        },
                        13.92964
                    };
                    groundReflectionCloud[] = {
                        {
                            0.471,
                            0.471,
                            0.463
                        },
                        13.92964
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.4,
                            0.48,
                            0.6
                        },
                        15
                    };
                    apertureMin = 70;
                    apertureStandard = 110;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
                class Lighting39 {
                    height = -0.1;
                    overcast = 0.8;
                    sunAngle = -24;
                    sunOrMoon = 0;
                    diffuse[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        2.8
                    };
                    diffuseCloud[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        2.8
                    };
                    ambient[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        0.84
                    };
                    ambientCloud[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        0.84
                    };
                    ambientMid[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        0.9072
                    };
                    ambientMidCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        0.9072
                    };
                    groundReflection[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        0.870912
                    };
                    groundReflectionCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        0.870912
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        0,
                        0.2355,
                        0.2335
                    };
                    skyAroundSun[] = {
                        0,
                        0.2355,
                        0.2335
                    };
                    fogColor[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        0.0275
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting40 {
                    height = -0.1;
                    overcast = 0.8;
                    sunAngle = -5;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        2.1
                    };
                    diffuseCloud[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        2.1
                    };
                    ambient[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        3.68
                    };
                    ambientCloud[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        3.68
                    };
                    ambientMid[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        3.9744
                    };
                    ambientMidCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        3.9744
                    };
                    groundReflection[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        3.815424
                    };
                    groundReflectionCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        3.815424
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0,
                            0.2235,
                            0.2705
                        },
                        4.232
                    };
                    skyAroundSun[] = {
                        {
                            0,
                            0.2235,
                            0.2705
                        },
                        7.636949
                    };
                    fogColor[] = {
                        {
                            0.106,
                            0.161,
                            0.267
                        },
                        4.715
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting41 {
                    height = -0.1;
                    overcast = 0.8;
                    sunAngle = -2;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        3.5
                    };
                    diffuseCloud[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        3.5
                    };
                    ambient[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        5.52
                    };
                    ambientCloud[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        5.52
                    };
                    ambientMid[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        5.9616
                    };
                    ambientMidCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        5.9616
                    };
                    groundReflection[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        5.723136
                    };
                    groundReflectionCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        5.723136
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0,
                            0.2175,
                            0.288
                        },
                        6.348
                    };
                    skyAroundSun[] = {
                        {
                            0,
                            0.2175,
                            0.288
                        },
                        12.31766
                    };
                    fogColor[] = {
                        {
                            0.11,
                            0.169,
                            0.286
                        },
                        7.0725
                    };
                    apertureMin = 7;
                    apertureStandard = 8;
                    apertureMax = 20;
                    standardAvgLum = 20;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting42 {
                    height = -0.1;
                    overcast = 0.8;
                    sunAngle = 0;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        4.2
                    };
                    diffuseCloud[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        4.2
                    };
                    ambient[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        6.24
                    };
                    ambientCloud[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        6.24
                    };
                    ambientMid[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        6.7392
                    };
                    ambientMidCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        6.7392
                    };
                    groundReflection[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        6.469632
                    };
                    groundReflectionCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        6.469632
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0,
                            0.2115,
                            0.306
                        },
                        7.176
                    };
                    skyAroundSun[] = {
                        {
                            0,
                            0.2115,
                            0.306
                        },
                        13.38876
                    };
                    fogColor[] = {
                        {
                            0.118,
                            0.18,
                            0.31
                        },
                        7.995
                    };
                    apertureMin = 8;
                    apertureStandard = 9;
                    apertureMax = 22;
                    standardAvgLum = 45;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting43 {
                    height = -0.1;
                    overcast = 0.8;
                    sunAngle = 45;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        12.04
                    };
                    diffuseCloud[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        12.04
                    };
                    ambient[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        11.84
                    };
                    ambientCloud[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        11.84
                    };
                    ambientMid[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.4848
                    };
                    ambientMidCloud[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.4848
                    };
                    groundReflection[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.02541
                    };
                    groundReflectionCloud[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.02541
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0,
                            0.09,
                            0.4
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0,
                            0.09,
                            0.4
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.3,
                            0.44,
                            0.74
                        },
                        16.5
                    };
                    apertureMin = 12;
                    apertureStandard = 18;
                    apertureMax = 25;
                    standardAvgLum = 150;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
                class Lighting44 {
                    height = -0.1;
                    overcast = 0.8;
                    sunAngle = 90;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        12.04
                    };
                    diffuseCloud[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        12.04
                    };
                    ambient[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        11.84
                    };
                    ambientCloud[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        11.84
                    };
                    ambientMid[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.4848
                    };
                    ambientMidCloud[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.4848
                    };
                    groundReflection[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.02541
                    };
                    groundReflectionCloud[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.02541
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0,
                            0.09,
                            0.4
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0,
                            0.09,
                            0.4
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.3,
                            0.44,
                            0.74
                        },
                        16.5
                    };
                    apertureMin = 12;
                    apertureStandard = 18;
                    apertureMax = 25;
                    standardAvgLum = 150;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
            };
            class Lighting: Lighting {
                class BrightAlmost: DayLightingBrightAlmost {
                    overcast = 0;
                };
                class Rainy: DayLightingRainy {
                    overcast = 1;
                };
            };
            class Overcast: Overcast {
                class Weather1: Weather1 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_clear_lco.paa";
                };
                class Weather7: Weather1 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_clear_lco.paa";
                };
                class Weather2: Weather2 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_almostclear_lco.paa";
                };
                class Weather3: Weather3 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_cloudy_lco.paa";
                };
                class Weather4: Weather4 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_cloudy_lco.paa";
                };
                class Weather5: Weather5 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_overcast_lco.paa";
                };
                class Weather6: Weather6 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_overcast_lco.paa";
                };
            };
        };
        humidityUpCoef = 0.1;
        humidityDownCoef = 0.05;
        class SimulWeather {
            noiseTexture = "a3\data_f\noise_raw.paa";
            numKeyframesPerDay = 48;
            windSpeedCoef = "10.0f";
            moonIrradianceCoef = "10.0f";
            fadeMaxDistanceKm = 1000;
            fadeMaxAltitudeKm = 15;
            fadeNumAltitudes = 8;
            fadeNumElevations = 8;
            fadeNumDistances = 8;
            fadeEarthTest = 1;
            autoBrightness = 0;
            autoBrightnessStrength = 0.1;
            cloudGridWidth = 64;
            cloudGridLength = 64;
            cloudGridHeight = 16;
            helperGridElevationSteps = 24;
            helperGridAzimuthSteps = 15;
            helperEffectiveEarthRadius = 1000000;
            helperCurvedEarth = 1;
            helperAdjustCurvature = 0;
            helperNumLayers = 120;
            helperMaxDistance = 160000;
            helperNearCloudFade = 0.1;
            helperChurn = 10;
            cloudWidth = 40000;
            cloudLength = 40000;
            wrapClouds = 1;
            noiseResolution = 8;
            noisePeriod = 4;
            opticalDensity = 0.5;
            alphaSharpness = 0.85;
            selfShadowScale = 0.905;
            mieAsymmetry = 0.5087;
            minimumLightElevationDegrees = 6;
            directLightCoef = 1;
            indirectLightCoef = 0.04;
            fogStart = 0;
            fogEnd = 50000;
            fogHeight = 2000;
            class DefaultKeyframe {
                rayleigh[] = {
                    0.00749,
                    0.01388,
                    0.02878
                };
                mie[] = {
                    0.0046,
                    0.0046,
                    0.0046
                };
                haze = 30;
                hazeBaseKm = 5;
                hazeScaleKm = 1;
                hazeEccentricity = 1;
                brightnessAdjustment = 1;
                cloudiness = 0.6;
                cloudBaseKm = 2.85;
                cloudHeightKm = 6;
                directLight = 1;
                indirectLight = 1;
                ambientLight = 0.2;
                noiseOctaves = 4.3;
                noisePersistence = 0.535;
                fractalAmplitude = 2.3;
                fractalWavelength = 240;
                extinction = 4.7;
                diffusivity = 0.001;
            };
            class Overcast {
                class Weather1: DefaultKeyframe {
                    overcast = 0;
                    cloudiness = 0;
                    diffusivity = 0.001;
                    seqFileKeyframe = 0;
                };
                class Weather2: DefaultKeyframe {
                    overcast = 0.2;
                    cloudiness = 0.25;
                    diffusivity = 0.001;
                    seqFileKeyframe = 0;
                };
                class Weather3: DefaultKeyframe {
                    overcast = 0.4;
                    cloudiness = 0.45;
                    diffusivity = 0.001;
                    seqFileKeyframe = 3;
                };
                class Weather4: DefaultKeyframe {
                    overcast = 0.5;
                    cloudiness = 0.46;
                    diffusivity = 0.01;
                    seqFileKeyframe = 4;
                };
                class Weather5: DefaultKeyframe {
                    overcast = 0.8;
                    cloudiness = 0.8;
                    diffusivity = 0.01;
                    extinction = 4.3;
                    cloudBaseKm = 1.9;
                    cloudHeightKm = 8;
                    seqFileKeyframe = 4;
                };
                class Weather6: DefaultKeyframe {
                    overcast = 1;
                    cloudiness = 1;
                    diffusivity = 0.001;
                    extinction = 4;
                    cloudBaseKm = 1.7;
                    cloudHeightKm = 10;
                    seqFileKeyframe = 4;
                };
            };
        };
        class Subdivision {
            class Fractal {
                rougness = 5;
                maxRoad = 0.02;
                maxTrack = 0.5;
                maxSlopeFactor = 0.05;
            };
            class WhiteNoise {
                rougness = 2;
                maxRoad = 0.01;
                maxTrack = 0.05;
                maxSlopeFactor = 0.0025;
            };
            minY = 0;
            minSlope = 0.02;
        };
        class Ambient {};
        class AmbientA3 {
            maxCost = 500;
            class Radius440_500 {
                areaSpawnRadius = 440;
                areaMaxRadius = 500;
                spawnCircleRadius = 30;
                spawnInterval = 4.7;
                class Species {
                    class Seagull {
                        maxCircleCount = "sea * 1 - night)) + 2 * houses * sea)) * 1 - night)";
                        maxWorldCount = 12;
                        cost = 3;
                        spawnCount = 1;
                        groupSpawnRadius = 10;
                        maxAlt = 100;
                        minAlt = -10;
                    };
                    class Rabbit_F {
                        maxCircleCount = "20 * 0.1 - houses)) * 1 - sea)";
                        maxWorldCount = 14;
                        cost = 5;
                        spawnCount = 1;
                        groupSpawnRadius = 10;
                        maxAlt = 80;
                        minAlt = -5;
                    };
                };
            };
            class Radius40_60 {
                areaSpawnRadius = 40;
                areaMaxRadius = 60;
                spawnCircleRadius = 10;
                spawnInterval = 1.5;
                class Species {
                    class CatShark_F {
                        maxCircleCount = "4 * WaterDepth interpolate [1,30,0,1]))";
                        maxWorldCount = 10;
                        cost = 6;
                        spawnCount = 1;
                        groupSpawnRadius = 10;
                        maxAlt = -10;
                        minAlt = -480;
                    };
                    class Turtle_F {
                        maxCircleCount = "2 * waterDepth interpolate [1,16,0,1]) * 1-houses) * 1-houses)))";
                        maxWorldCount = 6;
                        cost = 5;
                        spawnCount = 1;
                        groupSpawnRadius = 10;
                        maxAlt = -5;
                        minAlt = -370;
                    };
                    class Snake_random_F {
                        maxCircleCount = "1 - houses) * 2 * 1 - sea)) + 2 * meadow)))";
                        maxWorldCount = 3;
                        cost = 5;
                        spawnCount = 1;
                        groupSpawnRadius = 5;
                        maxAlt = 40;
                        minAlt = -5;
                    };
                    class Salema_F {
                        maxCircleCount = "12 * WaterDepth interpolate [1,30,0,1]) + 0.07))";
                        maxWorldCount = 40;
                        cost = 5;
                        spawnCount = 2;
                        groupSpawnRadius = 5;
                        maxAlt = -10;
                        minAlt = -80;
                    };
                    class Ornate_random_F {
                        maxCircleCount = "12 * WaterDepth interpolate [1,30,0,1]) + 0.05))";
                        maxWorldCount = 30;
                        cost = 5;
                        spawnCount = 3;
                        groupSpawnRadius = 5;
                        maxAlt = -10;
                        minAlt = -80;
                    };
                    class Mackerel_F {
                        maxCircleCount = "8 * WaterDepth interpolate [1,30,0,1]) + 0.07))";
                        maxWorldCount = 14;
                        cost = 5;
                        spawnCount = 2;
                        groupSpawnRadius = 5;
                        maxAlt = -15;
                        minAlt = -580;
                    };
                    class Mullet_F {
                        maxCircleCount = "8 * WaterDepth interpolate [1,30,0,1]) + 0.07))";
                        maxWorldCount = 14;
                        cost = 5;
                        spawnCount = 2;
                        groupSpawnRadius = 5;
                        maxAlt = -10;
                        minAlt = -380;
                    };
                    class Tuna_F {
                        maxCircleCount = "8 * WaterDepth interpolate [1,30,0,1]) - 0.2))";
                        maxWorldCount = 10;
                        cost = 5;
                        spawnCount = 2;
                        groupSpawnRadius = 5;
                        maxAlt = -10;
                        minAlt = -80;
                    };
                };
            };
            class Radius30_40 {
                areaSpawnRadius = 30;
                areaMaxRadius = 40;
                spawnCircleRadius = 3;
                spawnInterval = 3.75;
                class Species {
                    class DragonFly {
                        maxCircleCount = "4 * 1 - night) * 1 - WaterDepth interpolate [1,30,0,1])) * sea * 1 - windy)";
                        maxWorldCount = 4;
                        cost = 1;
                        spawnCount = 1;
                        groupSpawnRadius = 1;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                    class ButterFly_random {
                        maxCircleCount = "3 * 1 - night) * 1 - WaterDepth interpolate [1,30,0,1])) * 1 - windy)";
                        maxWorldCount = 6;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 1;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                };
            };
            class Radius15_20 {
                areaSpawnRadius = 15;
                areaMaxRadius = 20;
                spawnCircleRadius = 2;
                spawnInterval = 2.85;
                class Species {
                    class FxWindGrass1 {
                        maxCircleCount = "2 * 1 - WaterDepth interpolate [1,30,0,1])) * windy interpolate [0.1,0.25,0,1])";
                        maxWorldCount = 3;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 2.5;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                    class FxWindGrass2 {
                        maxCircleCount = "2 * 1 - WaterDepth interpolate [1,30,0,1])) * windy interpolate [0.1,0.25,0,1])";
                        maxWorldCount = 3;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 2.5;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                    class FxWindLeaf1 {
                        maxCircleCount = "2 * trees + 0.5) * windy interpolate [0.1,0.25,0,1])";
                        maxWorldCount = 3;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 2.5;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                    class FxWindLeaf2 {
                        maxCircleCount = "2 * trees + 0.5) * windy interpolate [0.1,0.25,0,1])";
                        maxWorldCount = 3;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 2.5;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                    class FxWindLeaf3 {
                        maxCircleCount = "2 * trees + 0.5) * windy interpolate [0.1,0.25,0,1])";
                        maxWorldCount = 3;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 2.5;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                    class FxWindPollen1 {
                        maxCircleCount = "3 * 1 - WaterDepth interpolate [1,30,0,1]))) * windy interpolate [0.05,0.15,0,1])";
                        maxWorldCount = 6;
                        cost = 1;
                        spawnCount = 1;
                        groupSpawnRadius = 1;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                };
            };
            class Radius6_10 {
                areaSpawnRadius = 6;
                areaMaxRadius = 10;
                spawnCircleRadius = 1;
                spawnInterval = 0.1;
                class Species {
                    class HoneyBee {
                        maxCircleCount = "4 * 1 - night) * 1 - sea) * 1 - houses) * 1 - windy)";
                        maxWorldCount = 8;
                        cost = 1;
                        spawnCount = 1;
                        groupSpawnRadius = 1;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                    class HouseFly {
                        maxCircleCount = "3 + 3 * houses)) * 1 - night) * 1 - WaterDepth interpolate [1,30,0,1])) * 1 - windy)";
                        maxWorldCount = 10;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 1;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                    class Mosquito {
                        maxCircleCount = "3 * 1 - WaterDepth interpolate [1,30,0,1])) * 1 - windy)";
                        maxWorldCount = 2;
                        cost = 1;
                        spawnCount = 1;
                        groupSpawnRadius = 1;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                };
            };
        };
        class Names {
            class airval {
                name = "Aeropuerto de Valverde";
                position[] = {
                    6510.73,
                    7498.85
                };
                type = "Airport";
                radiusA = 750.0;
                radiusB = 100.0;
                angle = 359.269;
            };
            class airaza {
                name = "Aeropuerto de Azahara";
                position[] = {
                    2437.36,
                    4189.19
                };
                type = "Airport";
                radiusA = 750.0;
                radiusB = 100.0;
                angle = 359.0;
            };
            class alamos {
                name = "Los Alamos";
                position[] = {
                    6347.27,
                    4249.52
                };
                type = "NameVillage";
                radiusA = 500.0;
                radiusB = 100.0;
                angle = 0.0;
            };
            class areaprocess {
                name = "Centro de Procesamiento El Rodillo";
                position[] = {
                    3827.85,
                    7540.79
                };
                type = "NameVillage";
                radiusA = 587.62;
                radiusB = 100.0;
                angle = 0.0;
            };
            class peaje {
                name = "Peaje";
                position[] = {
                    3908.16,
                    4319.7
                };
                type = "BorderCrossing";
                radiusA = 63.09;
                radiusB = 46.19;
                angle = 0.0;
            };
            class policent {
                name = "Centro de Reclutamiento Policial";
                position[] = {
                    3166.13,
                    3950.21
                };
                type = "NameLocal";
                radiusA = 250.0;
                radiusB = 100.0;
                angle = 0.0;
            };
            class paintball {
                name = "Campo de Paintball";
                position[] = {
                    2739.39,
                    5229.67
                };
                type = "FlatArea";
                radiusA = 192.55;
                radiusB = 50.0;
                angle = 360.0;
            };
            class cplibertad {
                name = "C.Penitenciaro La Libertad";
                position[] = {
                    4688.66,
                    6814.45
                };
                type = "NameVillage";
                radiusA = 596.26;
                radiusB = 100.0;
                angle = 0.0;
            };
            class nuclear {
                name = "Central Nuclear Kation";
                position[] = {
                    5830.83,
                    6179.97
                };
                type = "NameVillage";
                radiusA = 305.29;
                radiusB = 100.0;
                angle = 0.0;
            };
            class villaolivar {
                name = "Villa El Olivar";
                position[] = {
                    5280.57,
                    6342.4
                };
                type = "VegetationVineyard";
                radiusA = 156.31;
                radiusB = 50.0;
                angle = 0.0;
            };
            class cemenpaz {
                name = "Cementerio de la Paz";
                position[] = {
                    3593.41,
                    3824.62
                };
                type = "NameVillage";
                radiusA = 195.38;
                radiusB = 50.0;
                angle = 0.0;
            };
            class mafiacolmena {
                name = "La Colmena";
                position[] = {
                    5274.98,
                    7215.55
                };
                type = "Hill";
                radiusA = 244.23;
                radiusB = 50.0;
                angle = 0.0;
            };
            class descanso {
                name = "El Paso";
                position[] = {
                    4296.71,
                    4867.84
                };
                type = "NameVillage";
                radiusA = 125.04;
                radiusB = 100.0;
                angle = 0.0;
            };
            class urbplata {
                name = "Villa Plata";
                position[] = {
                    3592.6,
                    6199.27
                };
                type = "NameVillage";
                radiusA = 381.61;
                radiusB = 50.0;
                angle = 0.0;
            };
            class villaplomo {
                name = "Villa Plomo";
                position[] = {
                    3152.84,
                    5270.51
                };
                type = "NameVillage";
                radiusA = 244.23;
                radiusB = 50.0;
                angle = 0.0;
            };
            class miramar {
                name = "Cortijo Miramar";
                position[] = {
                    3478.39,
                    4966.76
                };
                type = "Hill";
                radiusA = 150.0;
                radiusB = 50.0;
                angle = 0.0;
            };
            class tikitaka {
                name = "Volcan Tiki Taka";
                position[] = {
                    2651.54,
                    6699.49
                };
                type = "ViewPoint";
                radiusA = 1164.58;
                radiusB = 250.0;
                angle = 0.0;
            };
            class cerro {
                name = "El Cerro";
                position[] = {
                    3922.18,
                    5093.63
                };
                type = "Hill";
                radiusA = 200.0;
                radiusB = 50.0;
                angle = 0.0;
            };
            class PuertoAz {
                name = "Puerto de Azahara";
                position[] = {
                    4111.11,
                    3498.14
                };
                type = "NameMarine";
                radiusA = 250.0;
                radiusB = 200.0;
                angle = 0.0;
            };
            class ruinasazahara {
                name = "Ruinas de Azahara";
                position[] = {
                    3337.14,
                    2929.43
                };
                type = "Hill";
                radiusA = 125.04;
                radiusB = 50.0;
                angle = 0.0;
            };
            class elpaso {
                name = "El Paso";
                position[] = {
                    4599.36,
                    7311.57
                };
                type = "FlatArea";
                radiusA = 200.0;
                radiusB = 100.0;
                angle = 0.0;
            };
            class alamosbf {
                name = "Los Alamos Beach Festival";
                position[] = {
                    6675.31,
                    4237.25
                };
                type = "VegetationPalm";
                radiusA = 200.0;
                radiusB = 50.0;
                angle = 0.0;
            };
            class subastalia {
                name = "Nueva Subastalia";
                position[] = {
                    5004.99,
                    6643.32
                };
                type = "NameVillage";
                radiusA = 150.0;
                radiusB = 50.0;
                angle = 0.0;
            };
            class puentegrandequetecagas {
                name = "Puente grande que te cagas";
                position[] = {
                    5542.44,
                    6480.07
                };
                type = "StrongpointArea";
                radiusA = 122.13;
                radiusB = 81.65;
                angle = 0.0;
            };
            class feria {
                name = "Recinto Ferial";
                position[] = {
                    6131.46,
                    6391.6
                };
                type = "FlatArea";
                radiusA = 107.36;
                radiusB = 60.25;
                angle = 0.0;
            };
            class mina {
                name = "Las Pedrizas";
                position[] = {
                    3556.25,
                    5707.28
                };
                type = "Hill";
                radiusA = 132.65;
                radiusB = 75.31;
                angle = 0.0;
            };
            class puticlub {
                name = "Club Lolitas";
                position[] = {
                    4422.51,
                    7359.89
                };
                type = "ViewPoint";
                radiusA = 165.81;
                radiusB = 94.14;
                angle = 0.0;
            };
            class snfernando {
                name = "San  Fernando";
                position[] = {
                    6768.94,
                    7585.26
                };
                type = "FlatAreaCity";
                radiusA = 176.22;
                radiusB = 127.58;
                angle = 0.0;
            };
            class puertoVal {
                name = "Puerto de Valverde";
                position[] = {
                    7205.61,
                    6522.99
                };
                type = "NameMarine";
                radiusA = 130.03;
                radiusB = 94.14;
                angle = 0.0;
            };
            class Puertoala {
                name = "Puerto de Los Alamos";
                position[] = {
                    5893.13,
                    4022.57
                };
                type = "NameMarine";
                radiusA = 130.03;
                radiusB = 94.14;
                angle = 0.0;
            };
            class quemadas {
                name = "Las Quemadas";
                position[] = {
                    3704.5,
                    4126.26
                };
                type = "FlatAreaCitySmall";
                radiusA = 200.0;
                radiusB = 100.0;
                angle = 0.0;
            };
            class azahara {
                name = "Azahara";
                position[] = {
                    3546.36,
                    3277.26
                };
                type = "NameCity";
                radiusA = 400.0;
                radiusB = 183.86;
                angle = 0.0;
            };
            class valverde {
                name = "Valverde";
                position[] = {
                    6606.3,
                    6522.92
                };
                type = "NameCity";
                radiusA = 400.0;
                radiusB = 183.86;
                angle = 0.0;
            };
            class oleollano {
                name = "Oleollano";
                position[] = {
                    2903.05,
                    3266.64
                };
                type = "NameVillage";
                radiusA = 196.01;
                radiusB = 50.0;
                angle = 0.0;
            };
        };
        loadingTexts[] = {
            "Mapa creado por Juan Adamuz (AdamuzSystems)"
        };
    };
};
class CfgWorldList {
    class POPLife_Reborn {};
};
class CfgSurfaces {
    class Default {
        friction = 2;
        dust = 0;
        surfaceFriction = 3;
        maxSpeedCoef = 1;
    };
    class Water {};
    class Beton: Default {
        friction = 2;
        surfaceFriction = 3;
    };
    class BetonNew: Default {
        friction = 2;
        surfaceFriction = 3;
    };
    class Asf1: Default {
        friction = 2;
        dust = 0;
        surfaceFriction = 3;
    };
    class Asf2: Default {
        friction = 2;
        dust = 0;
        surfaceFriction = 3;
    };
    class Asf3: Default {
        friction = 2;
        dust = 0;
        surfaceFriction = 3;
    };
    class pop_roca: Default {
        files = "pop_roca_*";
        rough = 0.88;
        dust = 0;
        lucidity = 3.5;
        friction = 1.7;
        surfaceFriction = 2;
        grassCover = 0.04;
        soundEnviron = "rock";
        character = "CliffGroup";
        soundHit = "hard_ground";
    };
    class huerta: Default {
        files = "huerta_*";
        rough = 0.88;
        dust = 0;
        lucidity = 3.5;
        friction = 1.7;
        surfaceFriction = 2;
        grassCover = 0.04;
        soundEnviron = "grass";
        character = "empty";
        soundHit = "soft_ground";
    };
    class pop_arena: Default {
        files = "pop_arena_*";
        character = "Empty";
        soundEnviron = "sand_exp";
        soundHit = "soft_ground";
        rough = 0.1;
        dust = 0;
        lucidity = 1.25;
        grassCover = 0.0;
        maxClutterColoringCoef = 1.5;
        impact = "hitGroundSoft";
        surfaceFriction = 1.6;
        maxSpeedCoef = 0.8;
    };
    class pop_seca: Default {
        files = "pop_seca_*";
        rough = 0.22;
        dust = 0;
        lucidity = 1.5;
        grassCover = 1;
        friction = 1;
        surfaceFriction = 2;
        soundEnviron = "grass";
        character = "GrassTallGroup";
        soundHit = "soft_ground";
    };
    class pop_verde: Default {
        files = "pop_verde_*";
        character = "StratisGreenGrassClutter";
        soundEnviron = "grass";
        soundHit = "soft_ground";
        rough = 0.08;
        maxSpeedCoef = 0.825;
        dust = 0.15;
        lucidity = 4;
        grassCover = 0.15;
        maxClutterColoringCoef = 1;
        impact = "hitGroundSoft";
        surfaceFriction = 1.7;
        AIAvoidStance = 1;
    };
    class schultz_medieval: Default {
        files = "schultz_medieval_*";
        rough = 0.88;
        dust = 0;
        lucidity = 3.5;
        grassCover = 0.04;
        soundEnviron = "rock";
        character = "empty";
        soundHit = "hard_ground";
    };
    class GdtGrassShort: Default {
        files = "gdt_grass_short_*";
        character = "GrassShortGroup";
        soundEnviron = "grass_exp";
        soundHit = "soft_ground";
        rough = 0.08;
        dust = 0;
        lucidity = 4;
        grassCover = 0.15;
        maxClutterColoringCoef = 1.0;
        impact = "hitGroundSoft";
        surfaceFriction = 1.7;
        AIAvoidStance = 1;
    };
    class GdtGrassTall: Default {
        files = "gdt_grass_tall_*";
        character = "GrassTallGroup";
        soundEnviron = "grasstall_exp";
        soundHit = "soft_ground";
        rough = 0.2;
        dust = 0;
        lucidity = 4;
        grassCover = 0.35;
        maxClutterColoringCoef = 1.06;
        impact = "hitGroundSoft";
        surfaceFriction = 1.7;
        AIAvoidStance = 2;
    };
    class GdtGrassLong: Default {
        files = "gdt_grass_long_*";
        character = "Empty";
        soundEnviron = "grasstall_exp";
        soundHit = "soft_ground";
        rough = 0.2;
        dust = 0;
        lucidity = 4;
        grassCover = 0.35;
        maxClutterColoringCoef = 1.5;
        impact = "hitGroundSoft";
        surfaceFriction = 1.7;
        AIAvoidStance = 2;
    };
    class GdtBeach: Default {
        files = "gdt_beach_*";
        character = "Empty";
        soundEnviron = "sand_exp";
        soundHit = "soft_ground";
        rough = 0.1;
        dust = 0.5;
        lucidity = 1.25;
        grassCover = 0.0;
        maxClutterColoringCoef = 1.5;
        impact = "hitGroundSoft";
        surfaceFriction = 1.6;
    };
    class GdtMud: Default {};
    class GdtVolcanoBeach: Default {
        files = "gdt_vbeach_*";
        character = "Empty";
        soundEnviron = "sand_exp";
        soundHit = "soft_ground";
        rough = 0.1;
        dust = 0;
        lucidity = 1.25;
        grassCover = 0.0;
        maxClutterColoringCoef = 1.5;
        impact = "hitGroundSoft";
        surfaceFriction = 1.6;
    };
    class GdtSeabedExp: Default {
        files = "gdt_seabedexp_*";
        character = "SeabedExpGroup";
        soundEnviron = "seabed_exp";
        soundHit = "hard_ground";
        rough = 0.15;
        dust = 0;
        lucidity = 150;
        grassCover = 0.0;
        maxClutterColoringCoef = 1.5;
        impact = "hitGroundHard";
        surfaceFriction = 1.4;
    };
    class GdtRedDirt: Default {
        files = "gdt_reddirt_*";
        character = "RedDirtGroup";
        soundEnviron = "dirt_exp";
        soundHit = "soft_ground";
        rough = 0.09;
        dust = 0;
        lucidity = 1;
        grassCover = 0.05;
        maxClutterColoringCoef = 1.02;
        impact = "hitGroundRed";
        surfaceFriction = 1.8;
    };
    class GdtAsphalt: Default {
        files = "gdt_asphalt_*";
        character = "Empty";
        soundEnviron = "asphalt_exp";
        soundHit = "concrete";
        rough = 0.05;
        dust = 0;
        lucidity = 0.03;
        grassCover = 0.0;
        maxClutterColoringCoef = 1.5;
        impact = "hitConcrete";
        surfaceFriction = 1.8;
    };
    class GdtField: Default {
        files = "gdt_field_*";
        character = "Empty";
        soundEnviron = "dirt_exp";
        soundHit = "soft_ground";
        rough = 0.09;
        dust = 0;
        lucidity = 1;
        grassCover = 0.05;
        maxClutterColoringCoef = 1.5;
        impact = "hitGroundSoft";
        surfaceFriction = 1.8;
    };
    class GdtForest: Default {
        files = "gdt_forest_*";
        character = "RainForestGroup";
        soundEnviron = "forest_exp";
        soundHit = "soft_ground";
        rough = 0.12;
        dust = 0;
        lucidity = 3.5;
        grassCover = 0.1;
        maxClutterColoringCoef = 1.05;
        impact = "hitGroundSoft";
        surfaceFriction = 1.7;
    };
    class GdtVolcano: Default {
        files = "gdt_volcano_*";
        character = "VolcanoGroup";
        soundEnviron = "dirt_exp";
        soundHit = "soft_ground";
        rough = 0.09;
        dust = 0;
        lucidity = 1;
        grassCover = 0.05;
        maxClutterColoringCoef = 1.0;
        impact = "hitGroundSoft";
        surfaceFriction = 1.8;
    };
    class GdtCliff: Default {
        files = "gdt_rock_*";
        character = "CliffGroup";
        soundEnviron = "stones_exp";
        soundHit = "concrete";
        rough = 0.2;
        dust = 0;
        lucidity = 1;
        grassCover = 0.0;
        maxClutterColoringCoef = 1.3;
        impact = "hitGroundHard";
        surfaceFriction = 1.9;
    };
};
class CfgMaterials {
    class Water {
        PixelShaderID = "Water";
        VertexShaderID = "Water";
        ambient[] = {
            0,
            0.025,
            0.05,
            0.5
        };
        diffuse[] = {
            0,
            0.05,
            0.04,
            1
        };
        forcedDiffuse[] = {
            0,
            0,
            0,
            1
        };
        specular[] = {
            0.12,
            0.12,
            0.12,
            1
        };
        specularPower = 100;
        emmisive[] = {
            0,
            0,
            0,
            0
        };
        class Stage1 {
            texture = "A3\Map_data\water_nofhq.paa";
            uvSource = "texWaterAnim";
            class uvTransform {
                aside[] = {
                    0,
                    1,
                    0
                };
                up[] = {
                    1,
                    0,
                    0
                };
                dir[] = {
                    0,
                    0,
                    1
                };
                pos[] = {
                    0.3,
                    0.4,
                    0
                };
            };
        };
        class Stage2 {
            texture = "A3\data_f\sea_foam_lco.paa";
            uvSource = "none";
        };
        class Stage3 {
            texture = "A3\Map_data\water2_nohq.paa";
            uvSource = "none";
        };
    };
    class Shore {
        PixelShaderID = "Shore";
        VertexShaderID = "Shore";
        ambient[] = {
            1,
            1,
            1,
            1
        };
        diffuse[] = {
            0.7,
            0.7,
            0.7,
            1
        };
        forcedDiffuse[] = {
            0,
            0,
            0,
            1
        };
        specular[] = {
            0.12,
            0.12,
            0.12,
            1
        };
        specularPower = 65;
        emmisive[] = {
            0,
            0,
            0,
            0
        };
        class TexGen0 {
            uvSource = "none";
        };
        class TexGen1 {
            uvSource = "texWaterAnim";
            class uvTransform {
                aside[] = {
                    0,
                    5,
                    0
                };
                up[] = {
                    5,
                    0,
                    0
                };
                dir[] = {
                    0,
                    0,
                    1
                };
                pos[] = {
                    0.3,
                    0.4,
                    0
                };
            };
        };
        class Stage1 {
            texture = "A3\data_f\water_nofhq.paa";
            texGen = 1;
        };
        class Stage2 {
            texture = "A3\data_f\sea_foam_lco.paa";
            texGen = 0;
        };
        class Stage3 {
            texture = "A3\data_f\water2_nohq.paa";
            texGen = 0;
        };
        class Stage6 {
            texture = "A3\data_f\shoreFoam_edge.paa";
            texGen = 0;
        };
        class Stage7 {
            texture = "A3\data_f\shoreWetNormal_nohq.paa";
            texGen = 0;
        };
        class Stage8 {
            texture = "A3\Data_F\env_land_CO.paa";
            useWorldEnvMap = 1;
            texGen = 0;
        };
    };
    class ShoreWet {
        PixelShaderID = "ShoreWet";
        VertexShaderID = "Shore";
        ambient[] = {
            1,
            1,
            1,
            1
        };
        diffuse[] = {
            1,
            1,
            1,
            1
        };
        forcedDiffuse[] = {
            0,
            0,
            0,
            0
        };
        emmisive[] = {
            0,
            0,
            0,
            1
        };
        specular[] = {
            0.1,
            0.1,
            0.1,
            1
        };
        specularPower = 1;
        class Stage0 {
            texture = "A3\data_f\shoreWetNormal_nohq.paa";
            uvSource = "none";
        };
        class Stage1 {
            texture = "#(ai,64,128,1)fresnel(1.4,0.1)";
            uvSource = "none";
        };
        class Stage2 {
            useWorldEnvMap = 1;
            texture = "A3\Data_F\env_land_CO.paa";
            uvSource = "none";
        };
    };
};
class CfgLensFlare {
    flarePos[] = {
        0.0,
        0.0,
        0.37,
        0.47,
        0.5,
        0.54,
        0.62,
        0.72,
        0.75,
        0.91,
        1.0,
        1.084,
        1.13,
        1.29,
        1.62,
        1.68
    };
    flareSizeCam[] = {
        0.2,
        0.4,
        0.025,
        0.05,
        0.042,
        0.043,
        0.04,
        0.75,
        0.6,
        0.7,
        0.15,
        0.85,
        0.44,
        0.45,
        0.55,
        0.1
    };
    flareBright[] = {
        1.0,
        0.3,
        0.3,
        0.3,
        0.3,
        0.4,
        0.4,
        0.05,
        0.03,
        0.12,
        0.05,
        0.08,
        0.05,
        0.2,
        0.2,
        1.0
    };
    flareSizeEye[] = {
        0.04
    };
    flareSizeEyeSun[] = {
        0.04
    };
};
class RscListNBox;
class RscPicture;
class RscButton;
class RscText;
class RscEdit;
class IGUIBack;
class RscActiveText;
class RscCombo;
class RscListBox;
class RscProgress;
class RscPictureKeepAspect;
class RscDisplayInventory_DLCTemplate;
class RscStructuredText;
class RscTitle;
class RscButtonMenuOK;
class RscControlsGroupNoHScrollbars;
class RscHTML;
class RscButtonMenu;
class RscStandardDisplay;
class RscVignette;
class RscControlsGroupNoScrollbars;
class RscFrame;
class CA_Title;
class RscDebugConsole;
class RscTrafficLight;
class RscFeedback;
class RscMessageBox;
class ShortcutPos;
class RscButtonMenuCancel;
class RscButtonMenuSteam;
class RscActivePicture;
class RscButtonMenuMain;
class RscControlsGroup;
class RscXListBox;
class RscButtonTextOnly;
class RscCheckBox;
class RscShortcutButton;
class RscDisplayPassword: RscStandardDisplay {
    scriptName = "RscDisplayPassword";
    scriptPath = "GUI";
    onLoad = "[""onLoad"",_this,""RscDisplayPassword"",'GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
    onUnload = "[""onUnload"",_this,""RscDisplayPassword"",'GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
    movingEnable = 0;
    simulationEnabled = 0;
    class controlsbackground {
        class Vignette: RscVignette {
            idc = 114998;
        };
        class TileGroup: RscControlsGroupNoScrollbars {
            idc = 115099;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TitleBackground: RscText {
            idc = 1080;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class MainBackground: RscText {
            idc = 1081;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
    };
    class controls {
        delete B_OK;
        delete B_Cancel;
        class Title: RscTitle {
            idc = 1000;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class PlayersName: Title {
            idc = 601;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TextPassword: RscText {
            idc = 1002;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class ValuePassword: RscEdit {
            idc = 101;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class ButtonOk: RscButtonMenuOK {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class ButtonCancel: RscButtonMenuCancel {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
    };
};
class RscDisplayMultiplayer: RscStandardDisplay {
    scriptName = "RscDisplayMultiplayer";
    scriptPath = "GUI";
    onLoad = "[""onLoad"",_this,""RscDisplayMultiplayer"",'GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
    onUnload = "[""onUnload"",_this,""RscDisplayMultiplayer"",'GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
    sortUp = "";
    sortDown = "";
    showPassworded = "";
    hidePassworded = "";
    showBattlEye = "";
    showNoBattlEye = "";
    hideBattlEye = "";
    showFull = "";
    hideFull = "";
    showExpansions = "";
    hideExpansions = "";
    modPresent = "";
    modMissing = "";
    colorPingUnknown[] = {
        0.4,
        0.4,
        0.4,
        1
    };
    colorPingGood[] = {
        0,
        1,
        0,
        1
    };
    colorPingPoor[] = {
        1,
        0.6,
        0,
        1
    };
    colorPingBad[] = {
        1,
        0,
        0,
        1
    };
    colorVersionGood[] = {
        1,
        1,
        1,
        1
    };
    colorVersionBad[] = {
        1,
        0,
        0,
        1
    };
    class controlsbackground {
        delete MainbackTop;
        delete MainbackBottom;
        delete MainbackMiddle;
        delete CA_ServerDetailLanguage;
        delete CA_ServerDetailMission;
        delete CA_ServerDetailPing;
        delete CA_ServerDetailSlots;
        delete CA_ServerDetailState;
        delete CA_TextDetailState;
        delete CA_TextServerDetailLanguage;
        delete CA_TextServerDetailPing;
        delete CA_TextServerDetailSlots;
        class Vignette: RscVignette {
            idc = 114998;
        };
        class TileGroup: RscControlsGroupNoScrollbars {
            idc = 115099;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
            class Controls {
                class Background: RscText {
                    idc = 114999;
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
            };
        };
        class RscTitleBackground: RscText {
            idc = 1080;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class MainBackground: RscText {
            idc = 1081;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TabsBackground: RscText {
            idc = 1082;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class ServerTabsBackground: RscText {
            idc = 1083;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class HeadersBackground: RscText {
            idc = 1084;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
    };
    class controls {
        delete Title;
        delete ValueSessions;
        delete ColumnPlayers;
        delete ColumnPing;
        delete ColumnType;
        delete ColumnMission;
        delete ColumnState;
        delete ColumnServer;
        delete FilterPlayers;
        delete FilterPing;
        delete FilterMission;
        delete FilterType;
        delete FilterServer;
        delete ServerDetailType;
        delete ServerDetailMission;
        delete ServerDetailState;
        delete ServerDetailSlots;
        delete ServerDetailPing;
        delete ServerDetailLanguage;
        delete ServerDetailCountry;
        delete ServerDetailVersion;
        delete ServerDetailVersionRequired;
        delete ServerDetailMods;
        delete ServerDetailIsland;
        delete ServerDetailDifficulty;
        delete ServerDetailTimeLeft;
        delete ServerDetailPlatform;
        delete ServerDetailPlayers;
        delete ServerDetailPassword;
        delete ServerDetailHost;
        delete FilterBattlEyeServers;
        delete FilterPasswordedServers;
        delete FilterFullServers;
        delete IconPlayers;
        delete IconPing;
        delete IconType;
        delete IconState;
        delete IconMission;
        delete IconServer;
        delete B_DPlay;
        delete B_Internet;
        delete B_Remote;
        delete B_Password;
        delete B_Refresh;
        delete B_Filter;
        delete B_Port;
        delete Progress;
        delete B_Join;
        delete B_New;
        delete B_Cancel;
        delete CA_Internet_Lan;
        class CA_FramePlayers: RscFrame {
            idc = 1801;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_FrameExpansions: RscFrame {
            idc = 1802;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_FrameMission: RscFrame {
            idc = 1803;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_ServerDetailPassword: RscPicture {
            idc = 143;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_ServerDetailHost: RscText {
            idc = 129;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_TextServerDetailIsland: RscText {
            idc = 1019;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_ServerDetailIsland: RscText {
            idc = 132;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_TextServerDetailDifficulty: CA_TextServerDetailIsland {
            idc = 1021;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_ServerDetailDifficulty: CA_ServerDetailIsland {
            idc = 138;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_TextServerDetailPlatform: CA_TextServerDetailIsland {
            idc = 1014;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_ServerDetailPlatform: CA_ServerDetailIsland {
            idc = 130;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_TextServerDetailCountry: CA_TextServerDetailIsland {
            idc = 1012;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_ServerDetailCountry: CA_ServerDetailIsland {
            idc = 145;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_TextServerDetailBE: CA_TextServerDetailIsland {
            idc = 1010;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_ServerDetailBE: CA_ServerDetailIsland {
            idc = 201;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TextServerDetailFilepatching: CA_TextServerDetailIsland {
            idc = 1025;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class ServerDetailFilepatching: CA_ServerDetailIsland {
            idc = 169;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_TextServerDetailTimeLeft: CA_TextServerDetailIsland {
            idc = 1017;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_ServerDetailTimeLeft: CA_ServerDetailIsland {
            idc = 134;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TextServerType: CA_TextServerDetailIsland {
            idc = 1007;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_ServerDetailVersion: CA_ServerDetailIsland {
            idc = 144;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_ServerDetailVersionRequired: CA_ServerDetailIsland {
            idc = 147;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_ServerDetailExpansion: RscListBox {
            idc = 148;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_ServerDetailPlayers: RscListBox {
            idc = 149;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_Cancel: RscButtonMenuCancel {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_Refresh: CA_Cancel {
            idc = 123;
            shortcuts[] = {
                "0x00050000 + 3",
                63
            };
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_Join: RscButtonMenuOK {
            idc = 105;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_BFilter: CA_Cancel {
            idc = 124;
            shortcuts[] = {};
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_Title2: RscTitle {
            idc = 1000;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class PlayersName: RscTitle {
            idc = 1008;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_FilterPasswordedServers: RscPicture {
            idc = 150;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_FilterFullServers: CA_FilterPasswordedServers {
            idc = 151;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_ServerBEFilter: CA_FilterPasswordedServers {
            idc = 154;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_ServerExpansionsFilter: CA_FilterPasswordedServers {
            idc = 155;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TabQuickPlay: CA_Cancel {
            idc = 164;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TabServers: CA_Cancel {
            idc = 165;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_BRemote: CA_Cancel {
            idc = 166;
            shortcuts[] = {};
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_New: CA_Cancel {
            idc = 167;
            shortcuts[] = {
                "0x00050000 + 2"
            };
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_ServerCount: RscText {
            idc = 158;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TabRecent: RscButtonMenu {
            idc = 160;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TabFriends: RscButtonMenu {
            idc = 162;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TabOfficialServers: RscButtonMenu {
            idc = 163;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TabLAN: RscButtonMenu {
            idc = 161;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TabInternet: RscButtonMenu {
            idc = 159;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_FavoriteColumn: RscShortcutButton {
            idc = 156;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_ServerColumn: RscButtonTextOnly {
            idc = 112;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_TypeColumn: CA_ServerColumn {
            idc = 141;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_MissionColumn: CA_ServerColumn {
            idc = 114;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_StateColumn: CA_ServerColumn {
            idc = 116;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_PlayersColumn: CA_ServerColumn {
            idc = 118;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_PingColumn: CA_ServerColumn {
            idc = 120;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_FavoriteIcon: RscPicture {
            idc = 157;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_ServerIcon: RscPicture {
            idc = 111;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_TypeIcon: CA_ServerIcon {
            idc = 140;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_MissionIcon: CA_ServerIcon {
            idc = 113;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_StateIcon: CA_ServerIcon {
            idc = 115;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_PlayersIcon: CA_ServerIcon {
            idc = 117;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_PingIcon: CA_ServerIcon {
            idc = 119;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class CA_ValueSessions: RscListBox {
            idc = 102;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
            class Columns {
                class ColumnFavorite {
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class ColumnServer {
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class ColumnType {
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class ColumnMission {
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class ColumnState {
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class ColumnPlayers {
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class ColumnPing {
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
            };
        };
        class ButtonLauncherServerBrowser: RscButtonMenu {
            idc = 168;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
    };
};
class RscDisplaySetupServer: RscStandardDisplay {
    idd = 132;
    onLoad = "[_this,'RscDisplayMain','load'] call (uiNamespace getVariable 'ASN_fnc_initASNDisplay')";
    onUnload = "[_this,'RscDisplayMain','unload'] call (uiNamespace getVariable 'ASN_fnc_initASNDisplay')";
    class controlsBackground {
        class Vignette: RscVignette {
            idc = 114998;
        };
        class TileGroup: RscControlsGroupNoScrollbars {
            idc = 115099;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
            class Controls {
                class Background: RscText {
                    idc = 114999;
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
            };
        };
        class TitleBackground: RscText {
            idc = 1080;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class MainBackground: RscText {
            idc = 1081;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TabsBackground: RscText {
            idc = 1082;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
    };
    class controls {
        class Title: RscTitle {
            idc = 1000;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class PlayersName: Title {
            idc = 1001;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class Content: RscControlsGroupNoScrollbars {
            idc = 2300;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
            class controls {
                class CA_TextName: RscText {
                    style = 1;
                    idc = 1002;
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class CA_ValueName: RscEdit {
                    idc = 101;
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class CA_TextPrivate: CA_TextName {
                    idc = 1003;
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class CA_ValuePrivate: RscXListBox {
                    idc = 104;
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class CA_TextPort: CA_TextName {
                    idc = 1004;
                    text = "$STR_DISP_IP_PORT";
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class CA_ValuePort: RscEdit {
                    idc = 105;
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class CA_TextMaxPlayers: CA_TextName {
                    idc = 1005;
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class CA_ValueMaxPlayers: RscEdit {
                    idc = 103;
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class CA_TextPassword: CA_TextName {
                    idc = 1006;
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class CA_ValuePassword: RscEdit {
                    idc = 102;
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class TextUPnP: CA_TextName {
                    idc = 1007;
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class ValueUPnP: RscCheckBox {
                    idc = 107;
                    checked = 0;
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class TextPortWarning: RscStructuredText {
                    idc = 106;
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class ButtonContinue: RscButtonMenuOK {
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
            };
        };
        class TabQuickPlay: RscButtonMenu {
            idc = 164;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TabServers: RscButtonMenu {
            idc = 165;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TabDirectConnect: RscButtonMenu {
            idc = 166;
            shortcuts[] = {};
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TabSetupServer: RscButtonMenu {
            idc = 167;
            shortcuts[] = {
                "0x00050000 + 2"
            };
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class ButtonLauncherServerBrowser: RscButtonMenuOK {
            idc = 168;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class ButtonBack: RscButtonMenuCancel {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
    };
};
class RscDisplayMain: RscStandardDisplay {
    idd = 0;
    onLoad = "[_this,'RscDisplayMain','load'] call (uiNamespace getVariable 'ASN_fnc_initASNDisplay')";
    onUnload = "[_this,'RscDisplayMain','unload'] call (uiNamespace getVariable 'ASN_fnc_initASNDisplay')";
    class Spotlight {
        class Bootcamp {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class EastWind {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class ApexProtocol {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
    };
    class ControlsBackground {
        delete MouseArea;
        delete BackgroundLeft;
        delete BackgroundRight;
        delete Picture;
    };
    class Controls {
        class ModIcons;
        class B_Quit;
        class B_Expansions;
        class B_Credits;
        class B_Player;
        class B_Options;
        class B_SinglePlayer;
        class B_MissionEditor;
        class B_MultiPlayer;
        class B_SingleMission;
        class B_Campaign;
        class Date;
        class ModList;
        class TrafficLight;
        class Version;
        class BackgroundSpotlight: RscPicture {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class BackgroundSpotlightLeft: BackgroundSpotlight {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class BackgroundSpotlightRight: BackgroundSpotlightLeft {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class SpotlightBase: RscControlsGroupNoScrollbars {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class Spotlight1: SpotlightBase {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class Spotlight2: SpotlightBase {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class Spotlight3: SpotlightBase {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class BackgroundBar: RscText {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class BackgroundCenter: BackgroundBar {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class BackgroundBarLeft: RscPicture {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class BackgroundBarRight: BackgroundBarLeft {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class Logo: RscActivePicture {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class LogoApex: Logo {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TitleSingleplayer: RscButtonMenu {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TitleIconSingleplayer: RscButton {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class GroupSingleplayer: RscControlsGroupNoScrollbars {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TitleMultiplayer: TitleSingleplayer {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TitleIconMultiplayer: TitleIconSingleplayer {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class GroupMultiplayer: GroupSingleplayer {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TitleTutorials: TitleSingleplayer {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TitleIconTutorials: TitleIconSingleplayer {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class GroupTutorials: GroupSingleplayer {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TitleOptions: TitleSingleplayer {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TitleIconOptions: TitleIconSingleplayer {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class GroupOptions: GroupSingleplayer {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TitleSession: RscButton {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class GroupSession: GroupSingleplayer {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class Exit: RscButton {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class InfoMods: RscControlsGroupNoHScrollbars {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class InfoDLCsOwned: InfoMods {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class InfoDLCs: InfoDLCsOwned {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class InfoNews: InfoMods {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class InfoVersion: InfoNews {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class Footer: RscText {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class AllMissions: RscButtonMenuMain {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class ProofsOfConcept: AllMissions {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
    };
    class IconPicture: RscPictureKeepAspect {
        w = 1;
        h = 1;
        x = -2;
        y = -2;
    };
    class DlcOwnedIconPicture: RscPictureKeepAspect {
        w = 1;
        h = 1;
        x = -2;
        y = -2;
    };
    class DlcIconPicture: RscPictureKeepAspect {
        w = 1;
        h = 1;
        x = -2;
        y = -2;
    };
};
class RscDisplayIPAddress: RscStandardDisplay {
    scriptName = "RscDisplayIPAddress";
    scriptPath = "GUI";
    onLoad = "[""onLoad"",_this,""RscDisplayIPAddress"",'GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
    onUnload = "[""onUnload"",_this,""RscDisplayIPAddress"",'GUI'] call  (uinamespace getvariable 'BIS_fnc_initDisplay')";
    class controlsBackground {
        class Vignette: RscVignette {
            idc = 114998;
        };
        class TileGroup: RscControlsGroupNoScrollbars {
            idc = 115099;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
            class Controls {
                class Background: RscText {
                    idc = 114999;
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
            };
        };
        class TitleBackground: RscText {
            idc = 1080;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class MainBackground: RscText {
            idc = 1081;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TabsBackground: RscText {
            idc = 1082;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
    };
    class controls {
        delete B_OK;
        delete B_Cancel;
        delete TextPort;
        delete ValuePort;
        delete TextAddress;
        delete ValueAddress;
        class Title: RscTitle {
            idc = 1000;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class PlayersName: Title {
            idc = 1001;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TabQuickPlay: RscButtonMenu {
            idc = 164;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TabServers: RscButtonMenu {
            idc = 165;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TabDirectConnect: RscButtonMenu {
            idc = 166;
            shortcuts[] = {};
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class TabSetupServer: RscButtonMenu {
            idc = 167;
            shortcuts[] = {
                "0x00050000 + 2"
            };
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class Content: RscControlsGroupNoScrollbars {
            idc = 2300;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
            class controls {
                class CA_TextAddress: RscText {
                    idc = 1003;
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class CA_ValueAddress: RscEdit {
                    idc = 101;
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class CA_TextPort: CA_TextAddress {
                    idc = 1004;
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class CA_ValuePort: CA_ValueAddress {
                    idc = 102;
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
                class ButtonOk: RscButtonMenuOK {
                    w = 1;
                    h = 1;
                    x = -2;
                    y = -2;
                };
            };
        };
        class ButtonLauncherServerBrowser: RscButtonMenuOK {
            idc = 168;
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
        class ButtonBack: RscButtonMenuCancel {
            w = 1;
            h = 1;
            x = -2;
            y = -2;
        };
    };
};
class RscBackgroundGUITop;
class RscBackgroundGUI;
class RscInvisibleButton {
    type = 1;
    text = "";
    colorText[] = {
        0,
        0,
        0,
        0
    };
    colorDisabled[] = {
        0,
        0,
        0,
        0
    };
    colorBackground[] = {
        0,
        0,
        0,
        0
    };
    colorBackgroundDisabled[] = {
        0,
        0,
        0,
        0
    };
    colorBackgroundActive[] = {
        0,
        0,
        0,
        0
    };
    colorFocused[] = {
        0,
        0,
        0,
        0
    };
    colorShadow[] = {
        0,
        0,
        0,
        0
    };
    colorBorder[] = {
        0,
        0,
        0,
        0
    };
    soundEnter[] = {
        "",
        0.09,
        1
    };
    soundPush[] = {
        "",
        0.09,
        1
    };
    soundClick[] = {
        "\ca\ui\data\sound\new1",
        0.07,
        1
    };
    soundEscape[] = {
        "",
        0.09,
        1
    };
    style = 2;
    x = 0;
    y = 0;
    w = 0.095589;
    h = 0.039216;
    shadow = 2;
    sizeEx = 0.03921;
    offsetX = 0.003;
    offsetY = 0.003;
    offsetPressedX = 0.002;
    offsetPressedY = 0.002;
    borderSize = 0;
    deletable = 0;
    fade = 0;
    period = 1.2;
    periodFocus = 1.2;
    periodOver = 1.2;
    font = "PuristaMedium";
};
class ASN_MainMenu {
    idd = 6600;
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[_this,'ASN_MainMenu','load'] call (uiNamespace getVariable 'ASN_fnc_initASNDisplay')";
    class Controls {
        class RscText_1000: RscPicture {
            idc = 1200;
            text = "\ASN_UI\Assets\reborn.paa";
            x = "0.0617187 * safezoneW + safezoneX";
            y = "0.082 * safezoneH + safezoneY";
            w = "0.154687 * safezoneW";
            h = "0.253 * safezoneH";
        };
        class btn1_i: RscPicture {
            idc = 15;
            show = 0;
            text = "\ASN_UI\Assets\jugar.paa";
            x = "0.066875 * safezoneW + safezoneX";
            y = "0.522 * safezoneH + safezoneY";
            w = "0.113437 * safezoneW";
            h = "0.11 * safezoneH";
            colorBackground[] = {
                0,
                0,
                0,
                0
            };
        };
        class btn2_1: RscPicture {
            idc = 16;
            show = 0;
            text = "\ASN_UI\Assets\opciones.paa";
            x = "0.066875 * safezoneW + safezoneX";
            y = "0.632 * safezoneH + safezoneY";
            w = "0.113437 * safezoneW";
            h = "0.11 * safezoneH";
        };
        class btn2: RscInvisibleButton {
            idc = 6;
            show = 0;
            onButtonClick = "[(findDisplay 6600),'ASN_MainMenu','options'] call (uiNamespace getVariable 'ASN_fnc_initASNDisplay')";
            x = "0.066875 * safezoneW + safezoneX";
            y = "0.632 * safezoneH + safezoneY";
            w = "0.113437 * safezoneW";
            h = "0.11 * safezoneH";
        };
        class btn3_i: RscPicture {
            idc = 17;
            show = 0;
            text = "\ASN_UI\Assets\salir.paa";
            x = "0.066875 * safezoneW + safezoneX";
            y = "0.742 * safezoneH + safezoneY";
            w = "0.113437 * safezoneW";
            h = "0.11 * safezoneH";
        };
        class btn3: RscInvisibleButton {
            idc = 7;
            show = 0;
            onButtonClick = "[(findDisplay 6600),'ASN_MainMenu','exit'] call (uiNamespace getVariable 'ASN_fnc_initASNDisplay')";
            x = "0.066875 * safezoneW + safezoneX";
            y = "0.742 * safezoneH + safezoneY";
            w = "0.113437 * safezoneW";
            h = "0.11 * safezoneH";
        };
        class btn8_i: RscPicture {
            idc = 119;
            show = 0;
            text = "";
            x = "0.881562 * safezoneW + safezoneX";
            y = "0.742 * safezoneH + safezoneY";
            w = "0.113437 * safezoneW";
            h = "0.11 * safezoneH";
        };
        class btn8: RscInvisibleButton {
            idc = 1119;
            show = 0;
            x = "0.881562 * safezoneW + safezoneX";
            y = "0.742 * safezoneH + safezoneY";
            w = "0.113437 * safezoneW";
            h = "0.11 * safezoneH";
        };
    };
};
class ASN_MainMenu_Options {
    idd = 6700;
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[_this,'ASN_MainMenu_Options','load'] call (uiNamespace getVariable 'ASN_fnc_initASNDisplay')";
    class controls {
        class RscText_1001: RscText {
            idc = 11;
            shadow = 0;
            show = 0;
            text = "";
            x = "0.0359375 * safezoneW + safezoneX";
            y = "0.588 * safezoneH + safezoneY";
            w = "0.20625 * safezoneW";
            h = "0.022 * safezoneH";
        };
        class btn1_1: RscPicture {
            idc = 15;
            show = 0;
            text = "\ASN_UI\Assets\video.paa";
            x = "0.066875 * safezoneW + safezoneX";
            y = "0.28 * safezoneH + safezoneY";
            w = "0.113437 * safezoneW";
            h = "0.11 * safezoneH";
        };
        class btn1: RscInvisibleButton {
            idc = 5;
            show = 0;
            onButtonClick = "[(findDisplay 6700),'ASN_MainMenu_Options','video'] call (uiNamespace getVariable 'ASN_fnc_initASNDisplay')";
            x = "0.066875 * safezoneW + safezoneX";
            y = "0.28 * safezoneH + safezoneY";
            w = "0.113437 * safezoneW";
            h = "0.11 * safezoneH";
        };
        class btn2_1: RscPicture {
            idc = 16;
            show = 0;
            text = "\ASN_UI\Assets\audio.paa";
            x = "0.066875 * safezoneW + safezoneX";
            y = "0.401 * safezoneH + safezoneY";
            w = "0.113437 * safezoneW";
            h = "0.11 * safezoneH";
        };
        class btn2: RscInvisibleButton {
            idc = 6;
            show = 0;
            onButtonClick = "[(findDisplay 6700),'ASN_MainMenu_Options','audio'] call (uiNamespace getVariable 'ASN_fnc_initASNDisplay')";
            x = "0.066875 * safezoneW + safezoneX";
            y = "0.401 * safezoneH + safezoneY";
            w = "0.113437 * safezoneW";
            h = "0.11 * safezoneH";
        };
        class btn3_1: RscPicture {
            idc = 17;
            show = 0;
            text = "\ASN_UI\Assets\teclado.paa";
            x = "0.066875 * safezoneW + safezoneX";
            y = "0.522 * safezoneH + safezoneY";
            w = "0.113437 * safezoneW";
            h = "0.11 * safezoneH";
        };
        class btn3: RscInvisibleButton {
            idc = 7;
            show = 0;
            onButtonClick = "[(findDisplay 6700),'ASN_MainMenu_Options','keybindings'] call (uiNamespace getVariable 'ASN_fnc_initASNDisplay')";
            x = "0.066875 * safezoneW + safezoneX";
            y = "0.522 * safezoneH + safezoneY";
            w = "0.113437 * safezoneW";
            h = "0.11 * safezoneH";
        };
        class btn4: RscInvisibleButton {
            idc = 8;
            show = 0;
            onButtonClick = "[(findDisplay 6700),'ASN_MainMenu_Options','game'] call (uiNamespace getVariable 'ASN_fnc_initASNDisplay')";
            x = "0.066875 * safezoneW + safezoneX";
            y = "0.632 * safezoneH + safezoneY";
            w = "0.113437 * safezoneW";
            h = "0.11 * safezoneH";
        };
        class btn4_1: RscPicture {
            idc = 18;
            show = 0;
            text = "\ASN_UI\Assets\juego.paa";
            x = "0.066875 * safezoneW + safezoneX";
            y = "0.632 * safezoneH + safezoneY";
            w = "0.113437 * safezoneW";
            h = "0.11 * safezoneH";
        };
        class btn6: RscInvisibleButton {
            idc = 9;
            show = 0;
            onButtonClick = "[(findDisplay 6700),'ASN_MainMenu_Options','return'] call (uiNamespace getVariable 'ASN_fnc_initASNDisplay')";
            x = "0.066875 * safezoneW + safezoneX";
            y = "0.742 * safezoneH + safezoneY";
            w = "0.113437 * safezoneW";
            h = "0.11 * safezoneH";
        };
        class btn6_i: RscPicture {
            idc = 19;
            show = 0;
            text = "\ASN_UI\Assets\volver.paa";
            x = "0.066875 * safezoneW + safezoneX";
            y = "0.742 * safezoneH + safezoneY";
            w = "0.113437 * safezoneW";
            h = "0.11 * safezoneH";
        };
        class btn7_1: RscPicture {
            idc = 118;
            show = 0;
            text = "\ASN_UI\Assets\perfil.paa";
            x = "0.881562 * safezoneW + safezoneX";
            y = "0.742 * safezoneH + safezoneY";
            w = "0.113437 * safezoneW";
            h = "0.11 * safezoneH";
        };
        class btn7: RscInvisibleButton {
            idc = 1118;
            show = 0;
            onButtonClick = "[(findDisplay 6700),'ASN_MainMenu_Options','perfil'] call (uiNamespace getVariable 'ASN_fnc_initASNDisplay')";
            x = "0.881562 * safezoneW + safezoneX";
            y = "0.742 * safezoneH + safezoneY";
            w = "0.113437 * safezoneW";
            h = "0.11 * safezoneH";
        };
    };
};
