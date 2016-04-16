[Transition]
 Measure=Script
 ScriptFile=#@#Addons\Lua\Transition.lua
 Steps=15

[BlurBehind]
 Measure=Plugin
 Plugin=FrostedGlass
 UpdateDivider=-1
 ;Default=1 Determines if the blur is enabled or not
 BlurEnabled=#BackgroundBlur#

[CalcPrimaryColorAlpha]
 Measure=Calc
 Formula="Sqrt((#PrimaryColorAlpha#-55)**2)"
 UpdateDivider=-1
 DynamicVariables=1

[CalcAccentColorAlpha]
 Measure=Calc
 Formula="Sqrt((#AccentColorAlpha#-55)**2)"
 UpdateDivider=-1
 DynamicVariables=1