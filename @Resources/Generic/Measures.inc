[Transition]
 Measure=Script
 ScriptFile=#@#Addons\Lua\Transition.lua
 Steps=15

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