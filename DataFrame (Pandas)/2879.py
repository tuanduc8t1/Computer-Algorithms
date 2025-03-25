import pandas as pd

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
    dis = employees.iloc[0:3]
    return dis
    
