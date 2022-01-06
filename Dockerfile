# Derived form mysql image
# This imports file form dockerhub
FROM mysql

# Set root password
ENV MYSQL_ROOT_PASSWORD pucsd

# Create a username and password
ENV MYSQL_USER pucsd
ENV MYSQL_PASSWORD pucsd

# Create a database
ENV MYSQL_DATABASE pucsdStudents

# Add the content of the directory given to our image
COPY ./  /docker-entrypoint-initdb.d/
