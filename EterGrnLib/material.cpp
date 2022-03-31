//arat

LPDIRECT3DTEXTURE8 CGrannyMaterial::GetD3DTexture(int iStage) const

//değiştir

LPDIRECT3DTEXTURE9 CGrannyMaterial::GetD3DTexture(int iStage) const

//arat

	STATEMANAGER.SaveTextureStageState(1, D3DTSS_ADDRESSU, D3DTADDRESS_WRAP);
	STATEMANAGER.SaveTextureStageState(1, D3DTSS_ADDRESSV, D3DTADDRESS_WRAP);

//değiştir

	STATEMANAGER.SaveSamplerState(1, D3DSAMP_ADDRESSU, D3DTADDRESS_WRAP);
	STATEMANAGER.SaveSamplerState(1, D3DSAMP_ADDRESSV, D3DTADDRESS_WRAP);

//arat

	STATEMANAGER.RestoreTextureStageState(1, D3DTSS_ADDRESSU);
	STATEMANAGER.RestoreTextureStageState(1, D3DTSS_ADDRESSV);

//değiştir

	STATEMANAGER.RestoreSamplerState(1, D3DSAMP_ADDRESSU);
	STATEMANAGER.RestoreSamplerState(1, D3DSAMP_ADDRESSV);