[Background]
 Meter=Image
 SolidColor=0,0,0,128
 W=#WORKAREAWIDTH#
 H=#WORKAREAHEIGHT#
 DynamicVariables=1
 Antialias=1
 UpdateDivider=-1

[PopupBG]
 Meter=Image
 SolidColor=#BackgroundColor#,#BackgroundColorAlpha#
 W=299
 H=99
 X=(#WORKAREAWIDTH#/2-149)
 Y=(#WORKAREAHEIGHT#/2-49)
 DynamicVariables=1
 Antialias=1
 UpdateDivider=-1

[PopupBGLayer1]
 Meter=Image
 SolidColor=#PrimaryColor#,[CalcPrimaryColorAlpha]
 W=300
 H=1
 X=(#WORKAREAWIDTH#/2-150)
 Y=(#WORKAREAHEIGHT#/2-50)
 DynamicVariables=1
 Antialias=1
 UpdateDivider=-1

[PopupBGLayer2]
 Meter=Image
 SolidColor=#PrimaryColor#,[CalcPrimaryColorAlpha]
 W=300
 H=1
 X=(#WORKAREAWIDTH#/2-150)
 Y=(#WORKAREAHEIGHT#/2+50)
 DynamicVariables=1
 Antialias=1
 UpdateDivider=-1

[PopupBGLayer3]
 Meter=Image
 SolidColor=#PrimaryColor#,[CalcPrimaryColorAlpha]
 W=1
 H=99
 X=(#WORKAREAWIDTH#/2-150)
 Y=(#WORKAREAHEIGHT#/2-49)
 DynamicVariables=1
 Antialias=1
 UpdateDivider=-1

[PopupBGLayer4]
 Meter=Image
 SolidColor=#PrimaryColor#,[CalcPrimaryColorAlpha]
 W=1
 H=100
 X=(#WORKAREAWIDTH#/2+150)
 Y=(#WORKAREAHEIGHT#/2-49)
 DynamicVariables=1
 Antialias=1
 UpdateDivider=-1

;------

[PopupAttention]
 Meter=Image
 ImageName=#@#Images\Attention.png
 ImageTint=#PrimaryColor#,#PrimaryColorAlpha#
 DynamicVariables=1
 AntiAlias=1
 UpdateDivider=-1
 X=(#WORKAREAWIDTH#/2-135)
 Y=(#WORKAREAHEIGHT#/2-44)

[PopupAttentionText]
 Meter=String
 FontColor=#PrimaryColor#,#PrimaryColorAlpha#
 FontFace=#FontLight#
 FontSize=12
 X=(#WORKAREAWIDTH#/2-100)
 Y=(#WORKAREAHEIGHT#/2-40)
 DynamicVariables=1
 AntiAlias=1
 UpdateDivider=-1
 Text=Attention