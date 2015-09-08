[Variables]
;===Search===
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
 SearchName=Explorer
 ; This is name of the search engine you are using (i.e. Explorer, Google, DeviantArt, etc.)
 ; It does NOT have to be the actual name of the search engine, just something short to remind you what you are searching with.
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


;===MusicPlayer===
 MusicPlayer=Spotify
 PlayerName=Spotify
 MusicMeasure=MeasureSpotify


;===Weather===
 WeatherCode=29644
 ;USNY0996
 ; Your Weather.com weather code or ZIP code will work
 WeatherIcons=ClimaconsWhite
 ;PlainWeatherIconsWhite
 Unit=F
 Unit1=F
 Unit2=M
 WeatherUnitAutodetect=0


;===Updater===
 AutoCheck=0

;---Rainmeter Updater---
 RainVersion=0.0.0.0000
 RainVersionType=Final
 RegExp=.*https://github.com/rainmeter/rainmeter/releases/download/v(.*)/Rainmeter
 AvailableVersion=AvailableDownloadVersion

;---Charms Updater---
 CharmsVersion=0.9.0


;===Fonts===
 Font=Segoe UI
 FontLight=Segoe UI Light
 FontSemilight=Segoe UI Semilight
 FontSemibold=Segoe UI Semibold
 FontDetail=Candara
 FontInfo=Utsaah


;===SystemStuff===
 TimeFormat=12
 PathToLocate32=#@#Addons\Locate32\Locate32.exe


;===MainColorVariables===
 BackgroundColor=20,20,20
 BackgroundColorAlpha=230

 AccentColor=203,48,48
 AccentColorAlpha=128

 PrimaryColor=203,48,48
 PrimaryColorAlpha=255

 SecondaryColor=120,120,120
 SecondaryColorAlpha=255

; ----- Color Scheme Presets -----
 ; Not sure what you want your Charms bar to look like?
 ; Try these awesome presets made to inspire your imagination!
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
