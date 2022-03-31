//arat

	if (m_stFileName.empty())
	{
		if (FAILED(ms_lpd3dDevice->CreateTexture(m_width, m_height, 1, 0, m_d3dFmt, D3DPOOL_MANAGED, &m_lpd3dTexture)))
			return false;
	}

//değiştir

	if (m_stFileName.empty())
	{
		if (FAILED(ms_lpd3dDevice->CreateTexture(m_width, m_height, 1, 0, m_d3dFmt, D3DPOOL_MANAGED, &m_lpd3dTexture, NULL)))
			return false;
	}

//arat

LPDIRECT3DTEXTURE8 lpd3dTexture;

//değiştir

LPDIRECT3DTEXTURE9 lpd3dTexture;

//arat (2 kez)

		IDirect3DTexture8* pkTexSrc=lpd3dTexture;
		IDirect3DTexture8* pkTexDst=m_lpd3dTexture;

//değiştir (2 kez)

		IDirect3DTexture9* pkTexSrc=lpd3dTexture;
		IDirect3DTexture9* pkTexDst=m_lpd3dTexture;

//arat (2 kez)

			IDirect3DSurface8* ppsSrc = NULL;
			IDirect3DSurface8* ppsDst = NULL;

//değiştir (2 kez)

			IDirect3DSurface9* ppsSrc = NULL;
			IDirect3DSurface9* ppsDst = NULL;
