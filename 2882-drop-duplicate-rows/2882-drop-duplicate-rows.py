import pandas as pd

def dropDuplicateEmails(customers: pd.DataFrame) -> pd.DataFrame:
    data = customers.drop_duplicates(subset=['email'])
    return data
    