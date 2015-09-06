function Update()

	LatestVersion = SKIN:GetMeasure('AvailableDownloadVersionBeta'):GetStringValue()
	CurrentVersion = SKIN:GetVariable('RainVersion')
	if (CurrentVersion=="" or CurrentVersion>=LatestVersion) then
		return 0
	else
		return 1
	end
	
end -- function Update