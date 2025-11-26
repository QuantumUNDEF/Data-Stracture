import time
from selenium import webdriver
from selenium.webdriver.chrome.service import Service
from selenium.webdriver.common.by import By
from selenium.webdriver.chrome.options import Options
from webdriver_manager.chrome import ChromeDriverManager

# --- CONFIGURATION ---
FORM_URL = "https://docs.google.com/forms/d/e/1FAIpQLSc5ACJHtDupLDom9WxeUIY25TwyvG_vPOv7v1w_ONvJSwN3lg/viewform?usp=dialog"
NAME = "Sankalp"
ROOM = "353"
COLLEGE = "KCC ITM"
PHONE = "9170639617"

# Setup Chrome Driver
chrome_options = Options()
chrome_options.add_experimental_option("detach", True) # Keeps browser open if script finishes
driver = webdriver.Chrome(service=Service(ChromeDriverManager().install()), options=chrome_options)

try:
    print("Opening Form...")
    driver.get(FORM_URL)
    time.sleep(3) # Wait for page to load completely

    # --- FILLING THE FORM (YOU MUST UPDATE THE XPATHS BELOW) ---

    # 1. Name
    # Right-click the "Name" answer box > Inspect > Copy > Copy XPath
    driver.find_element(By.XPATH, '//*[@id="REPLACE_WITH_ACTUAL_XPATH"]').send_keys(NAME)

    # 2. Room No
    driver.find_element(By.XPATH, '//*[@id="REPLACE_WITH_ACTUAL_XPATH"]').send_keys(ROOM)

    # 3. College Name
    driver.find_element(By.XPATH, '//*[@id="REPLACE_WITH_ACTUAL_XPATH"]').send_keys(COLLEGE)

    # 4. Time (Assuming it's a dropdown or radio button for "Afternoon")
    # You need to click the specific "Afternoon" option
    driver.find_element(By.XPATH, '//*[@id="REPLACE_WITH_ACTUAL_XPATH"]').click()

    # 5. Phone No
    driver.find_element(By.XPATH, '//*[@id="REPLACE_WITH_ACTUAL_XPATH"]').send_keys(PHONE)

    # 6. The "Tick Box" (Checkbox)
    driver.find_element(By.XPATH, '//*[@id="REPLACE_WITH_ACTUAL_XPATH"]').click()

    # 7. Submit Button
    submit_btn = driver.find_element(By.XPATH, '//*[@id="REPLACE_WITH_ACTUAL_XPATH"]')
    submit_btn.click()

    print("Form submitted successfully!")

except Exception as e:
    print(f"An error occurred: {e}")

# driver.quit() # Uncomment this to close the browser automatically after finishing