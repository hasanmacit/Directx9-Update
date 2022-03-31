//arat

D3DLIGHT8

//değiştir

D3DLIGHT9

//arat

		LPDIRECT3DTEXTURE8		m_lpCharacterShadowMapTexture;
		LPDIRECT3DSURFACE8		m_lpCharacterShadowMapRenderTargetSurface;
		LPDIRECT3DSURFACE8		m_lpCharacterShadowMapDepthSurface;
		D3DVIEWPORT8			m_ShadowMapViewport;
		WORD					m_wShadowMapSize;

		// Backup Device Context
		LPDIRECT3DSURFACE8		m_lpBackupRenderTargetSurface;
		LPDIRECT3DSURFACE8		m_lpBackupDepthSurface;
		D3DVIEWPORT8			m_BackupViewport;

//değiştir

		LPDIRECT3DTEXTURE9		m_lpCharacterShadowMapTexture;
		LPDIRECT3DSURFACE9		m_lpCharacterShadowMapRenderTargetSurface;
		LPDIRECT3DSURFACE9	m_lpCharacterShadowMapDepthSurface;
		D3DVIEWPORT9			m_ShadowMapViewport;
		WORD					m_wShadowMapSize;

		// Backup Device Context
		LPDIRECT3DSURFACE9		m_lpBackupRenderTargetSurface;
		LPDIRECT3DSURFACE9		m_lpBackupDepthSurface;
		D3DVIEWPORT9			m_BackupViewport;

//arat

			IDirect3DVertexBuffer8* m_pkVBSplat[SPLAT_VB_NUM];
			IDirect3DVertexBuffer8* m_pkVBNone[NONE_VB_NUM];

//değiştir

			IDirect3DVertexBuffer9* m_pkVBSplat[SPLAT_VB_NUM];
			IDirect3DVertexBuffer9* m_pkVBNone[NONE_VB_NUM];

//arat

			D3DLIGHT8  m_kLight;
			D3DMATERIAL8 m_kMtrl;

//değiştir

			D3DLIGHT9  m_kLight;
			D3DMATERIAL9 m_kMtrl;