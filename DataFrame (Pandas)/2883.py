import pandas as pd

def dropMissingData(students: pd.DataFrame) -> pd.DataFrame:
    students = students[students['name'].notna()]
    return students
    
