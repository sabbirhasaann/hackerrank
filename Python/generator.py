import secrets
import string
import uuid
import os
import base64
import random

def stringGenerator(length):
    random_string = ''.join(secrets.choice(string.ascii_letters + string.digits) for _ in range(length))
    print(random_string)

def stringGeneratorUuidModule(length):
    random_string = str(uuid.uuid4()).replace('-', '')[:length]
    print(random_string)

def stringGeneratorRandom(length):
    random_string = base64.b64encode(os.urandom(length)).decode('utf-8')[:length]
    print(random_string)

def stringGeneratorManual(length):
    random_string = ''.join([random.choice(string.ascii_letters + string.digits) for _ in range(length)])
    print(random_string)

if __name__ == "__main__":
    stringGenerator(length=100)