import sys                                                                                          
from hepdata_validator.submission_file_validator import SubmissionFileValidator
from hepdata_validator.data_file_validator import DataFileValidator
import glob

for file_path in glob.glob('./*.yaml'):
    if ".cxx" in file_path or ".png" in file_path or ".dat" in file_path or ".py" in file_path  or ".pdf" in file_path: 
        print("skipping file ",file_path)
        continue
    print("running validation on ", file_path)
    validator = SubmissionFileValidator() if "submission" in file_path else DataFileValidator()
    is_valid = validator.validate(file_path=file_path)
    validator.print_errors(file_path)