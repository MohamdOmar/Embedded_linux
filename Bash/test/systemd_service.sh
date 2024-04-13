#!/bin/bash

# Get essential information from the user
read -p "Enter the service name: " service_name
read -p "Enter the full path to the script or program to start: " script_path

# Create the service file with proper permissions
cat << EOF > /etc/systemd/system/$service_name.service
[Unit]
Description=$service_name
After=network.target

[Service]
Type=simple
User=$USER  # Run as the current user (adjust as needed)
ExecStart=$script_path
Restart=on-failure

[Install]
WantedBy=multi-user.target
EOF

# Set appropriate file permissions
chmod 644 /etc/systemd/system/$service_name.service

# Inform the user about the next steps
echo "Service file created successfully!"
echo "Reload systemd to enable the service:"
echo "sudo systemctl daemon-reload"
echo "Start the service:"
echo "sudo systemctl start $service_name"
echo "Enable it to start on boot:"
echo "sudo systemctl enable $service_name"
