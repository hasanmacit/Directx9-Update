//arat

STATEMANAGER.SetVertexShader(D3DFVF_XYZ|D3DFVF_TEX1|D3DFVF_DIFFUSE);

//değiştir

STATEMANAGER.SetFVF(D3DFVF_XYZ | D3DFVF_TEX1 | D3DFVF_DIFFUSE);

//arat

if (FAILED(ms_lpd3dDevice->CreateTexture(dwWidth, dwHeight, 0, 0, D3DFMT_A8R8G8B8, D3DPOOL_MANAGED, &m_lpd3dTexture)))

//değiştir

if (FAILED(ms_lpd3dDevice->CreateTexture(dwWidth, dwHeight, 0, 0, D3DFMT_A8R8G8B8, D3DPOOL_MANAGED, &m_lpd3dTexture, NULL)))