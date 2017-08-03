# Grafana Installation (Ubuntu/Debian)
### Step 1: Herunterladen und Dependencies installieren
```bash
wget https://s3-us-west-2.amazonaws.com/grafana-releases/release/grafana_4.4.2_amd64.deb

sudo apt-get install -y adduser libfontconfig
```

### Step 2: Installieren
```bash
sudo dpkg -i grafana_4.4.2_amd64.deb
```

### Step 3: Server starten
```bash
sudo service grafana-server start
```
