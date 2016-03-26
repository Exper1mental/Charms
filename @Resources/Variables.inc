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
 ; Determines the position of the Charms sidebar skins in relation to other skins and windows.
 ; Acceptable values (best way to understand them is to try them)
 ;     -2    On Desktop. The sidebars will try to force themselves to be below all other windows and skins
 ;     -1     Bottom. The will try to force themselves to be below all other windows and skins. I'm not sure
 ;               what the difference is between this and On Desktop.
 ;      0     Normal. The sidebars will behave...normally
 ;      1     Topmost. The sidebar will display on top of other windows and skins, but won't compete with
 ;               other skins to stay Topmost
 ;      2     Stay Topmost. The sidebare will force itself to display on top of any other window and skin. This
 ;               may cause issues if another window or skin in that area of the desktop also tries to Stay Topmost.
 ;               This setting can be useful if you have other skins set to Topmost and want to make sure the sidebar
 ;               is on top of them.


;~~~ Fonts ~~~
 Font=Segoe UI
 ; This is the font used in situations that may not be fitting to using the FontLight variable's font.
 ; The best way to see what it effects is to change it to a different font.
 FontLight=Segoe UI Light
 ; This is the font used for most of the text in the skins.
 ; The best way to see what it effects is to change it to a different font.
 FontSemilight=Segoe UI Semilight
 FontSemibold=Segoe UI Semibold
 ; The above font variables currently do not effect anything.
 ; They are variables I used in the past that now should be obselete.
 ; I keep these here in case I decide to reuse them for something.


;~~~ Colors and Alphas~~~
 ; To avoid issues when changing color variables, do not use HEX values. Use RGB (Red,Green,Blue) instead

 ;---Background Colors---
 BackgroundColor=20,20,20
 ; Pretty straightforward. Determines the background color
 ; Uses the RGB (Red,Green,Blue) format
 ; "0,0,0" is completely black and "255,255,255" is completely white
 BackgroundColorAlpha=230
 ; Determines the alpha (transparency) of the meters using the BackgroundColor variable
 ; "0" is completely transparent and "255" is completely opaque

 AccentColor=203,48,48
 ; Determines the "accent" color.
 ; In general accent color is used for fade-in button backgrounds
 AccentColorAlpha=128
 ; Determines the alpha (transparency) of meters using the AccentColor variable

 ; NOTE: It is STRONGLY recommended that at least either BackgroundColor and AccentColor or BackgroundColorAlpha
 ; and AccentColorAlpha be noticably different from each other. If they aren't certain effects (both helpful ones and purely
 ; aethetical ones) may be hard to see or completely invisible. This is not intended to discourage you from customizing
 ; the colors to your preference, but rather warning you of potential issues you might encounter under certain circumstances.

 PrimaryColor=203,48,48
 ; Determines the "primary" color.
 ; Used as the color of most text and foreground objects.
 PrimaryColorAlpha=255
 ; Determines the alpha (transparency) of meters using the PrimaryColor variable

 SecondaryColor=120,120,120
 ; Determines the "secondary" color.
 ; Used for certain text and foreground objects.
 SecondaryColorAlpha=255
 ; Determines the alpha (transparency) of meters using the SecondaryColor variable

 ; NOTE: It is STRONGLY recommended that at least either PrimaryColor and SecondaryColor or PrimaryColorAlpha and
 ; SecondaryColorAlpha be noticably different from each other. If they aren't certain effects (both helpful ones and purely
 ; aethetical ones) may be hard to see or completely invisible. This is not intended to discourage you from customizing
 ; the colors to your preference, but rather warning you of potential issues you might encounter under certain circumstances.


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
; Note: This also includes variables used in the Update skin.
 AutoCheck=0
 ; This determines whether or not the Charms bar will occasionally check for Rainmeter and Charms updates
 ; in the background. This does not impede or effect the use of the Update skin for manually checking updates.
 ; If set to "0" then the Charms Bar will not check for updates
 ; If set to "1" then the Charms Bar will check for updates


 ;--- Rainmeter Updater ---
 RainVersion=0.0.0.0000
 ; Please do not tamper with this variable. It has been set to 0.0.0.0000 intentionally. If you haven't noticed
 ; already this is NOT the value displayed in the Updater skin. Rather, this is the value used before the Update
 ; skin retrieves the installed version of Rainmeter.
 RainVersionType=Final
 ; This determines the type of Rainmeter updates the Updater skin will look for when there is an internet connection
 ; There are two acceptable values for this variable:
 ;    1. Set to "Final". This will only check for the latest Final release of Rainmeter
 ;    2. Set to "Beta". This will check for the lastest Beta release of Rainmeter. If there are no available Betas it
 ;        will look for the latest Final release.
 RegExp=.*https://github.com/rainmeter/rainmeter/releases/download/v(.*)/Rainmeter
 ; This is the variable is to use retrieve the value of the latest version of Rainmeter from the Rainmeter GitHub site. 


 ;--- Charms Updater ---
 CharmsVersion=0.9.0
 ; Please do not tamper with this variable. This is used to compare your version of Charms to the latest version of Charms.
 ; Changing this will interfere with the ability of skin to accurately see if there is an update available.





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
 ; It does NOT have to be the actual name of the search engine, just something to remind you what
 ; you are searching with.
 SearchURL=search-ms:query=$UserInput$&crumb=location:#SearchPath#
 ; This is the URL that will be used to search for your query.

 ;%Comspec% "$UserInput$"
 ;%Comspec% /k taskkill /im $UserInput$.exe
 ;https://technet.microsoft.com/en-us/library/bb490880.aspx#EBAA
 ;;["cmd.exe" "/k $UserInput$"]
 ; search-ms:query=$UserInput$&crumb=location:#SearchPath#
 SearchPath=shell:::{20d04fe0-3aea-1069-a2d8-08002b30309d}&
 ; This variable is only used by the Windows Explorer search
 ; It sets where Explorer will search for your query (it set to This PC by default, which searches your 
 ; entire PC)
 SearchCmd=2
 SearchCmd2=[!WriteKeyValue Variables SearchCmd "2" "#@#Variables.inc"]
 SetSearchCmd2=[!SetVariable SearchCmd "2"]
 SearchCmd3=[!WriteKeyValue Variables SearchCmd "3" "#@#Variables.inc"]
 SetSearchCmd3=[!SetVariable SearchCmd "3"]
 ; Please do not tamper with the above variables unless you know what you are doing.
 PathToLocate32=#@#Addons\Locate32\Locate32.exe
 ; As it says, this is used as the path to Locate32.
 ; It is advised you do not change this unless you know what you are doing.




;=== Music Skin Variables ===
;~~~ Players ~~~
 MusicPlayer=Spotify
 PlayerName=Spotify
 MusicMeasure=MeasureSpotify




;=== Weather Skin Variables ===
 WeatherCode=USNY0996
 ; For best results please use your ZIP code or your Weather.com weather code
 WeatherIcons=ClimaconsWhite
 ;PlainWeatherIconsWhite
 Unit=F
  ; This variable changes the temperature unit that is used.
  ; Setting this to "F" will change your weather unit to Fahrenheit
  ; Setting this to "M" will change your weather unit to Celsius
 Unit1=F
 Unit2=M
 ; Please do not tamper with the above variables unless you know what you are doing.
 WeatherUnitAutodetect=0
 ; This determines whether or not Charms uses your system weather unit or the skin weather unit (which
 ; is above and called Unit)
