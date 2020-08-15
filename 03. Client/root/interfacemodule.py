## paste at top:
if app.ENABLE_SKILLCHOOSE:
	import uiskillchoose
	
## search:
self.wndGuildBuilding = None

## paste under:
		if app.ENABLE_SKILLCHOOSE:
			self.wndSkillChoose = None
			
## search:
self.wndChatLog = wndChatLog

## paste under:
		if app.ENABLE_SKILLCHOOSE:
			self.wndSkillChoose = uiskillchoose.SkillChoose()
			
## search:
if self.wndGameButton:

## paste under:
		if app.ENABLE_SKILLCHOOSE:
			if self.wndSkillChoose:
				self.wndSkillChoose.Destroy()
				
## search:
del self.wndItemSelect

## paste under:
		if app.ENABLE_SKILLCHOOSE:
			if self.wndSkillChoose:
				del self.wndSkillChoose
				
## search:
def RefreshShopDialog(self):

## paste under:
	if app.ENABLE_SKILLCHOOSE:
		def openSkillChoose(self, raceNum):
			self.wndSkillChoose.Open(raceNum)