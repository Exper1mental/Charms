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

[AutoReposition]
 Measure=String
 String=#AutoReposition#
 UpdateDivider=-1
 DynamicVariables=1
 IfMatch=True
 IfMatchAction=[!Move "(#WORKAREAWIDTH# - 345)" "0"][!DisableMeasure AutoReposition]
 IfMatch2=False
 IfMatchAction2=[!DisableMeasure AutoReposition]

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