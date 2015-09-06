#NoTrayIcon
#Region ;**** Directives created by AutoIt3Wrapper_GUI ****
#AutoIt3Wrapper_UseUpx=n
#AutoIt3Wrapper_UseX64=n
#EndRegion ;**** Directives created by AutoIt3Wrapper_GUI ****

If $CMDLine[0] = 2 Then

	$Ver = FileGetVersion($CMDLine[1])
	if StringUpper($CMDLine[2]) = "VERSION" Then
		$VerLen = StringInStr($Ver, ".", 0, 2)
		$Ver = StringLeft($Ver, $VerLen -1)
	ElseIf StringUpper($CMDLine[2]) = "REVISION" Then
		$VerLen = StringInStr($Ver, ".", 0, 2)
		$Ver = StringRight($Ver, $VerLen)
	Else
		Exit
	EndIf

	ShellExecute($CMDLine[1], "!SetVariable " & $CMDLine[2] & " " & $Ver)

EndIf

