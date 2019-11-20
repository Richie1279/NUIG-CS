totalVAT = 0
VAT = 0
numVAT = 0

def main():

        total = 0
        num = 0
        sale = []
        saleVAT = []
        num = int(input("Please enter the sales figures:"))

        while(num !=-1):
            sale.append(num)

            saleVAT.append(addVAT(num))
            total += saleVAT[-1]
            num = int(input("Please enter sales figures:"))

        print("sales figures entered:%s"%(sale))
        print("sales figures incl VAT:%s"%(saleVAT))
        print("total VAT charged:", totalVAT)
        print("total sales for the period:", total)

def addVAT(num):
    
        global VAT
        global numVAT
        global totalVAT

        VAT = num*0.23
        numVAT = num + VAT
        totalVAT +=VAT

        return numVAT
        
main()

    

