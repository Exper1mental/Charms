;#include <Constants.au3>
#NoTrayIcon
#Region ;**** Directives created by AutoIt3Wrapper_GUI ****
#AutoIt3Wrapper_UseUpx=n
#AutoIt3Wrapper_UseX64=n
#EndRegion ;**** Directives created by AutoIt3Wrapper_GUI ****

Example()

Func Example()
    ; Retrieve the file version of the AutoIt executable.
    $sFileVersion = FileGetVersion($CMDLine[1])

    ; Display the file version. This should be equal to @AutoItVersion.
    ;MsgBox($MB_SYSTEMMODAL, "", $sFileVersion)
	ShellExecute($CMDLine[1], "!SetVariable " & $CMDLine[2] & " " & $sFileVersion)
EndFunc   ;==>Example