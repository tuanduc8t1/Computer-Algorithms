class Solution:
    def predictPartyVictory(self, senate: str) -> str:
        rx = []
        dx = []
        for i in range(0, len(senate)):
            if(senate[i] == 'R'):
                rx.append(i)
            else:
                dx.append(i)
        while(len(rx) > 0 and len(dx) > 0):
            idr, idd = rx[0], dx[0]
            rx.pop(0)
            dx.pop(0)
            if idr < idd:
                rx.append(idr + len(senate))
            else:
                dx.append(idd + len(senate))

        if len(dx) == 0:
            return "Radiant"
        return "Dire"

        
