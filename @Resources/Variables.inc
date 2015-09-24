[Variables]

; NOTICE: Documentation is provided here in english. There are no translations of the documentation available. :(

;=== Generic Variables ===
;~~~ Appearence and Performance Settings ~~~
 UpdateSpeed=20
 ; This is the speed in milliseconds at which Rainmeter updates the skins in this suite.
 ; Faster update speeds result in faster, smoother animations but higher CPU usage
 ; Slower update speeds result in slower, choppy animations but lower CPU usage
 ; 20 is default
 TransitionSpeed1=
 TransitionSpeed2=
 SidebarZPos=1


;~~~ Fonts ~~~
 Font=Segoe UI
 ; This is the font used in situations that may not be fitting to using the FontLight variable's font.
 ; The best way to see what it effects is to change it to a different font.
 FontLight=Segoe UI Light
 ; This is the font used for most of the text in the skins.
 ; The best way to see what it effects is to change it to a different font.
 FontSemilight=Segoe UI Semilight
 FontSemibold=Segoe UI Semibold
 FontDetail=Candara
 FontInfo=Utsaah
 ; The above four font variables currently do not effect anything.
 ; They are mostly variables used in the past that have become obsolete.


;~~~ Colors ~~~
 BackgroundColor=20,20,20
 ; Determines the background color
 ; Uses the RGB (Red,Green,Blue) format
 ; "0,0,0" is completely black and "255,255,255" is completely white
 BackgroundColorAlpha=230
 ; Determines the alpha (transparency) of the background color
 ; "0" is completely transparent and "255" is completely opaque

 AccentColor=203,48,48
 AccentColorAlpha=128

; NOTE: It is STRONGLY recommended that at least either BackgroundColor and AccentColor or BackgroundColorAlpha
; and AccentColorAlpha be noticably different from each other. If they aren't certain effects (both helpful ones and purely
; aethetical ones) may be hard to see or completely invisible. This is not intended to discourage you from customizing
; the colors to your preference, but rather warning you of potential issues you might encounter is certain instances.

 PrimaryColor=203,48,48
 PrimaryColorAlpha=255

 SecondaryColor=120,120,120
 SecondaryColorAlpha=255

; --- Color Scheme Presets ---
 ; Not sure what you want your Charms bar to look like?
 ; Try using these awesome presets made to inspire your imagination!
 ;
 ; - Light Color Scheme -
 ; BackgroundColor=255,255,255
 ; BackgroundColorAlpha=128
 ; AccentColor=160,160,160
 ; AccentAlpha=128
 ; PrimaryColor=0,0,0
 ; PrimaryColorAlpha=255
 ; SecondaryColor=95,95,95
 ; SecondaryColorAlpha=255
 ;
 ; - Dark Color Scheme -
 ; BackgroundColor=0,0,0
 ; BackgroundColorAlpha=128
 ; AccentColor=95,95,95
 ; AccentAlpha=128
 ; PrimaryColor=255,255,255
 ; PrimaryColorAlpha=255
 ; SecondaryColor=160,160,160
 ; SecondaryColorAlpha=255
 ; 
 ; - Bengal Red Color Scheme -
 ; BackgroundColor=20,20,20
 ; BackgroundColorAlpha=180
 ; AccentColor=203,48,48
 ; AccentAlpha=128
 ; PrimaryColor=203,48,48
 ; PrimaryColorAlpha=255
 ; SecondaryColor=120,120,120
 ; SecondaryColorAlpha=255


;~~~ Updates ~~~
 AutoCheck=0
 ; This determines whether or not the Charms bar will check for updates in the background.
 ; This does not effect using the Update skin to check for updates.
 ; If set to "0" then the Charms Bar will not check for updates
 ; If set to "1" then the Charms Bar will check for updates




;=== Charms Skin Variables ===
 TimeFormat=12
 ; This should be pretty straightforward.
 ; Use "12" if you prefer standard time
 ; Use "24" if you prefer military time




;=== Search Skin Variables ===
 ; Documentation 
 ; Within the search skin you can choose between 14 preset search engines, 11 online and 3 local:
 ;      Online
 ;          - Google
 ;          - DuckDuckGo
 ;          - Bing
 ;          - Yahoo
 ;          - Wikipedia
 ;          - Amazon
 ;          - YouTube
 ;          - IMDB
 ;          - Reddit
 ;          - DeviantArt
 ;          - Rainmeter Forums
 ;      Local
 ;          - Command Prompt
 ;          - Windows Explorer
 ;          - Locate32
 ; Alternatively, you can use your own search engine by editing the below settings.
 ; Bear in mind if you set another search engine to be your default (by right clicking on it), anything you
 ; have entered for most of these variables will be lost.
 
 SearchName=Explorer
 ; This is name of the search engine you are using (i.e. Explorer, Google, DeviantArt, etc.)
 ; It does NOT have to be the actual name of the search engine, just something short to remind you what
 ; you are searching with.
 SearchURL=search-ms:query=$UserInput$&crumb=location:#SearchPath#
 ;%Comspec% "$UserInput$"
 ;%Comspec% /k taskkill /im $UserInput$.exe
 ;https://technet.microsoft.com/en-us/library/bb490880.aspx#EBAA
 ;;["cmd.exe" "/k $UserInput$"]
 ; search-ms:query=$UserInput$&crumb=location:#SearchPath#
 SearchPath=shell:::{20d04fe0-3aea-1069-a2d8-08002b30309d}&
 ; Used only for the location that Windows Explorer searches (set to This PC by default)
 SearchCmd=2
 SearchCmd2=[!WriteKeyValue Variables SearchCmd "2" "#@#Variables.inc"]
 SetSearchCmd2=[!SetVariable SearchCmd "2"]
 SearchCmd3=[!WriteKeyValue Variables SearchCmd "3" "#@#Variables.inc"]
 SetSearchCmd3=[!SetVariable SearchCmd "3"]
 PathToLocate32=#@#Addons\Locate32\Locate32.exe
 ; As it says, this is used as the path to Locate32.
 ; It is advised you do not change this unless you know what you are doing.




;=== Music Skin Variables ===
;~~~ Players ~~~
 MusicPlayer=Spotify
 PlayerName=Spotify
 MusicMeasure=MeasureSpotify




;=== Weather Skin Variables ===
 WeatherCode=29644
 ;USNY0996
 ; For best results please use your ZIP code Weather.com weather code
 WeatherIcons=ClimaconsWhite
 ;PlainWeatherIconsWhite
 Unit=F
  ; This 
 Unit1=F
 ; Please do not tamper with this variable unless you know what you are doing.
 ; Setting this to "F" will change your weather unit to Fahrenheit
 Unit2=M
 ; Please do not tamper with this variable unless you know what you are doing.
 ; Setting this to "M" will change your weather unit to Celsius
 WeatherUnitAutodetect=0
 ; This determines whether or not Charms uses your system weather unit or the skin weather unit (which
 ; is above and called Unit)




;=== Updater Skin Variables ===
;~~~ Rainmeter Updater ~~~
 RainVersion=0.0.0.0000
 ; Please do not tamper with this variable. It has been set to 0.0.0.0000 intentionally. If you haven't noticed
 ; this is NOT the value displayed in the Update skin. Rather, this is the value used before the Update skin
 ; retrieves the installed version of Rainmeter.
 RainVersionType=Final
 ; This determines the types of Rainmeter updates the Update skin will look for when there is an internet connection
 ; There are two acceptable options for this variable:
 ;    1. Set to "Final". This will only check for the latest Final release of Rainmeter
 ;    2. Set to "Beta". This will check for the lastest Beta release of Rainmeter. If there are no available Betas it
 ;        will look for the lastest Final release.
 RegExp=.*https://github.com/rainmeter/rainmeter/releases/download/v(.*)/Rainmeter
 ; This is the variable used by 
 AvailableVersion=AvailableDownloadVersion


;~~~Charms Updater~~~
 CharmsVersion=0.9.0
 ; Please do not tamper with this variable. This is used to compare your version of Charms to the latest version of Charms.
