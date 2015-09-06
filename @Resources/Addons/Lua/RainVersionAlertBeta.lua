function Update()

	LatestVersion = SKIN:GetMeasure('AvailableDownloadVersionBeta'):GetStringValue()
	CurrentVersion = SKIN:GetVariable('RainVersion')
	if (CurrentVersion=="" or CurrentVersion>=LatestVersion) then
		return 1
	else
		return 0
	end
	
end -- function Update