## search:
def ChangeCurrentSkill(self, skillSlotNumber):

## paste under:
	if app.ENABLE_SKILLCHOOSE:
		def BINARY_SkillChoose(self, raceNum):
			if self.interface:
				self.interface.openSkillChoose(raceNum)