void InitWindow(int width, int height, const char *title)
bool WindowShouldClose(void)
void CloseWindow(void)
bool IsWindowReady(void)
bool IsWindowFullscreen(void)
bool IsWindowHidden(void)
bool IsWindowMinimized(void)
bool IsWindowMaximized(void)
bool IsWindowFocused(void)
bool IsWindowResized(void)
bool IsWindowState(unsigned int flag)
void SetWindowState(unsigned int flags)
void ClearWindowState(unsigned int flags)
void ToggleFullscreen(void)
void MaximizeWindow(void)
void MinimizeWindow(void)
void RestoreWindow(void)
void SetWindowIcon(Image image)
void SetWindowTitle(const char *title)
void SetWindowPosition(int x, int y)
void SetWindowMonitor(int monitor)
void SetWindowMinSize(int width, int height)
void SetWindowSize(int width, int height)
void *GetWindowHandle(void)
int GetScreenWidth(void)
int GetScreenHeight(void)
int GetMonitorCount(void)
Vector2 GetMonitorPosition(int monitor)
int GetMonitorWidth(int monitor)
int GetMonitorHeight(int monitor)
int GetMonitorPhysicalWidth(int monitor)
int GetMonitorPhysicalHeight(int monitor)
int GetMonitorRefreshRate(int monitor)
Vector2 GetWindowPosition(void)
Vector2 GetWindowScaleDPI(void)
const char *GetMonitorName(int monitor)
void SetClipboardText(const char *text)
const char *GetClipboardText(void)
void ShowCursor(void)
void HideCursor(void)
bool IsCursorHidden(void)
void EnableCursor(void)
void DisableCursor(void)
bool IsCursorOnScreen(void)
void ClearBackground(Color color)
void BeginDrawing(void)
void EndDrawing(void)
void BeginMode2D(Camera2D camera)
void EndMode2D(void)
void BeginMode3D(Camera3D camera)
void EndMode3D(void)
void BeginTextureMode(RenderTexture2D target)
void EndTextureMode(void)
void BeginScissorMode(int x, int y, int width, int height)
void EndScissorMode(void)
Ray GetMouseRay(Vector2 mousePosition, Camera camera)
Matrix GetCameraMatrix(Camera camera)
Matrix GetCameraMatrix2D(Camera2D camera)
Vector2 GetWorldToScreen(Vector3 position, Camera camera)
Vector2 GetWorldToScreenEx(Vector3 position, Camera camera, int width, int height)
Vector2 GetWorldToScreen2D(Vector2 position, Camera2D camera)
Vector2 GetScreenToWorld2D(Vector2 position, Camera2D camera)
void SetTargetFPS(int fps)
int GetFPS(void)
float GetFrameTime(void)
double GetTime(void)
void SetConfigFlags(unsigned int flags)
void SetTraceLogLevel(int logType)
void SetTraceLogExit(int logType)
void SetTraceLogCallback(TraceLogCallback callback)
void TraceLog(int logType, const char *text, ...)
void *MemAlloc(int size)
void MemFree(void *ptr)
void TakeScreenshot(const char *fileName)
int GetRandomValue(int min, int max)
uint8_t *LoadFileData(const char *fileName, unsigned int *bytesRead)
void UnloadFileData(unsigned char *data)
bool SaveFileData(const char *fileName, void *data, unsigned int bytesToWrite)
char *LoadFileText(const char *fileName)
void UnloadFileText(unsigned char *text)
bool SaveFileText(const char *fileName, char *text)
bool FileExists(const char *fileName)
bool DirectoryExists(const char *dirPath)
bool IsFileExtension(const char *fileName, const char *ext)
const char *GetFileExtension(const char *fileName)
const char *GetFileName(const char *filePath)
const char *GetFileNameWithoutExt(const char *filePath)
const char *GetDirectoryPath(const char *filePath)
const char *GetPrevDirectoryPath(const char *dirPath)
const char *GetWorkingDirectory(void)
char **GetDirectoryFiles(const char *dirPath, int *count)
void ClearDirectoryFiles(void)
bool ChangeDirectory(const char *dir)
bool IsFileDropped(void)
char **GetDroppedFiles(int *count)
void ClearDroppedFiles(void)
long GetFileModTime(const char *fileName)
uint8_t *CompressData(uint8_t *data, int dataLength, int *compDataLength)
uint8_t *DecompressData(uint8_t *compData, int compDataLength, int *dataLength)
bool SaveStorageValue(unsigned int position, int value)
int LoadStorageValue(unsigned int position)
void OpenURL(const char *url)
bool IsKeyPressed(int key)
bool IsKeyDown(int key)
bool IsKeyReleased(int key)
bool IsKeyUp(int key)
void SetExitKey(int key)
int GetKeyPressed(void)
int GetCharPressed(void)
bool IsGamepadAvailable(int gamepad)
bool IsGamepadName(int gamepad, const char *name)
const char *GetGamepadName(int gamepad)
bool IsGamepadButtonPressed(int gamepad, int button)
bool IsGamepadButtonDown(int gamepad, int button)
bool IsGamepadButtonReleased(int gamepad, int button)
bool IsGamepadButtonUp(int gamepad, int button)
int GetGamepadButtonPressed(void)
int GetGamepadAxisCount(int gamepad)
float GetGamepadAxisMovement(int gamepad, int axis)
bool IsMouseButtonPressed(int button)
bool IsMouseButtonDown(int button)
bool IsMouseButtonReleased(int button)
bool IsMouseButtonUp(int button)
int GetMouseX(void)
int GetMouseY(void)
Vector2 GetMousePosition(void)
void SetMousePosition(int x, int y)
void SetMouseOffset(int offsetX, int offsetY)
void SetMouseScale(float scaleX, float scaleY)
float GetMouseWheelMove(void)
int GetMouseCursor(void)
void SetMouseCursor(int cursor)
int GetTouchX(void)
int GetTouchY(void)
Vector2 GetTouchPosition(int index)
void SetGesturesEnabled(unsigned int gestureFlags)
bool IsGestureDetected(int gesture)
int GetGestureDetected(void)
int GetTouchPointsCount(void)
float GetGestureHoldDuration(void)
Vector2 GetGestureDragVector(void)
float GetGestureDragAngle(void)
Vector2 GetGesturePinchVector(void)
float GetGesturePinchAngle(void)
void SetCameraMode(Camera camera, int mode)
void UpdateCamera(Camera *camera)
void SetCameraPanControl(int keyPan)
void SetCameraAltControl(int keyAlt)
void SetCameraSmoothZoomControl(int keySmoothZoom)
void SetCameraMoveControls(int keyFront, int keyBack, int keyRight, int keyLeft, int keyUp, int keyDown)
void DrawPixel(int posX, int posY, Color color)
void DrawPixelV(Vector2 position, Color color)
void DrawLine(int startPosX, int startPosY, int endPosX, int endPosY, Color color)
void DrawLineV(Vector2 startPos, Vector2 endPos, Color color)
void DrawLineEx(Vector2 startPos, Vector2 endPos, float thick, Color color)
void DrawLineBezier(Vector2 startPos, Vector2 endPos, float thick, Color color)
void DrawLineStrip(Vector2 *points, int pointsCount, Color color)
void DrawCircle(int centerX, int centerY, float radius, Color color)
void DrawCircleSector(Vector2 center, float radius, int startAngle, int endAngle, int segments, Color color)
void DrawCircleSectorLines(Vector2 center, float radius, int startAngle, int endAngle, int segments, Color color)
void DrawCircleGradient(int centerX, int centerY, float radius, Color color1, Color color2)
void DrawCircleV(Vector2 center, float radius, Color color)
void DrawCircleLines(int centerX, int centerY, float radius, Color color)
void DrawEllipse(int centerX, int centerY, float radiusH, float radiusV, Color color)
void DrawEllipseLines(int centerX, int centerY, float radiusH, float radiusV, Color color)
void DrawRing(Vector2 center, float innerRadius, float outerRadius, int startAngle, int endAngle, int segments, Color color)
void DrawRingLines(Vector2 center, float innerRadius, float outerRadius, int startAngle, int endAngle, int segments, Color color)
void DrawRectangle(int posX, int posY, int width, int height, Color color)
void DrawRectangleV(Vector2 position, Vector2 size, Color color)
void DrawRectangleRec(Rectangle rec, Color color)
void DrawRectanglePro(Rectangle rec, Vector2 origin, float rotation, Color color)
void DrawRectangleGradientV(int posX, int posY, int width, int height, Color color1, Color color2)
void DrawRectangleGradientH(int posX, int posY, int width, int height, Color color1, Color color2)
void DrawRectangleGradientEx(Rectangle rec, Color col1, Color col2, Color col3, Color col4)
void DrawRectangleLines(int posX, int posY, int width, int height, Color color)
void DrawRectangleLinesEx(Rectangle rec, int lineThick, Color color)
void DrawRectangleRounded(Rectangle rec, float roundness, int segments, Color color)
void DrawRectangleRoundedLines(Rectangle rec, float roundness, int segments, int lineThick, Color color)
void DrawTriangle(Vector2 v1, Vector2 v2, Vector2 v3, Color color)
void DrawTriangleLines(Vector2 v1, Vector2 v2, Vector2 v3, Color color)
void DrawTriangleFan(Vector2 *points, int pointsCount, Color color)
void DrawTriangleStrip(Vector2 *points, int pointsCount, Color color)
void DrawPoly(Vector2 center, int sides, float radius, float rotation, Color color)
void DrawPolyLines(Vector2 center, int sides, float radius, float rotation, Color color)
bool CheckCollisionRecs(Rectangle rec1, Rectangle rec2)
bool CheckCollisionCircles(Vector2 center1, float radius1, Vector2 center2, float radius2)
bool CheckCollisionCircleRec(Vector2 center, float radius, Rectangle rec)
bool CheckCollisionPointRec(Vector2 point, Rectangle rec)
bool CheckCollisionPointCircle(Vector2 point, Vector2 center, float radius)
bool CheckCollisionPointTriangle(Vector2 point, Vector2 p1, Vector2 p2, Vector2 p3)
bool CheckCollisionLines(Vector2 startPos1, Vector2 endPos1, Vector2 startPos2, Vector2 endPos2, Vector2 *collisionPoint)
Rectangle GetCollisionRec(Rectangle rec1, Rectangle rec2)
Image LoadImage(const char *fileName)
Image LoadImageRaw(const char *fileName, int width, int height, int format, int headerSize)
Image LoadImageAnim(const char *fileName, int *frames)
Image LoadImageFromMemory(const char *fileType, const uint8_t *fileData, int dataSize)
void UnloadImage(Image image)
bool ExportImage(Image image, const char *fileName)
bool ExportImageAsCode(Image image, const char *fileName)
Image GenImageColor(int width, int height, Color color)
Image GenImageGradientV(int width, int height, Color top, Color bottom)
Image GenImageGradientH(int width, int height, Color left, Color right)
Image GenImageGradientRadial(int width, int height, float density, Color inner, Color outer)
Image GenImageChecked(int width, int height, int checksX, int checksY, Color col1, Color col2)
Image GenImageWhiteNoise(int width, int height, float factor)
Image GenImagePerlinNoise(int width, int height, int offsetX, int offsetY, float scale)
Image GenImageCellular(int width, int height, int tileSize)
Image ImageCopy(Image image)
Image ImageFromImage(Image image, Rectangle rec)
Image ImageText(const char *text, int fontSize, Color color)
Image ImageTextEx(Font font, const char *text, float fontSize, float spacing, Color tint)
void ImageFormat(Image *image, int newFormat)
void ImageToPOT(Image *image, Color fill)
void ImageCrop(Image *image, Rectangle crop)
void ImageAlphaCrop(Image *image, float threshold)
void ImageAlphaClear(Image *image, Color color, float threshold)
void ImageAlphaMask(Image *image, Image alphaMask)
void ImageAlphaPremultiply(Image *image)
void ImageResize(Image *image, int newWidth, int newHeight)
void ImageResizeNN(Image *image, int newWidth,int newHeight)
void ImageResizeCanvas(Image *image, int newWidth, int newHeight, int offsetX, int offsetY, Color fill)
void ImageMipmaps(Image *image)
void ImageDither(Image *image, int rBpp, int gBpp, int bBpp, int aBpp)
void ImageFlipVertical(Image *image)
void ImageFlipHorizontal(Image *image)
void ImageRotateCW(Image *image)
void ImageRotateCCW(Image *image)
void ImageColorTint(Image *image, Color color)
void ImageColorInvert(Image *image)
void ImageColorGrayscale(Image *image)
void ImageColorContrast(Image *image, float contrast)
void ImageColorBrightness(Image *image, int brightness)
void ImageColorReplace(Image *image, Color color, Color replace)
Color *LoadImageColors(Image image)
Color *LoadImagePalette(Image image, int maxPaletteSize, int *colorsCount)
void UnloadImageColors(Color *colors)
void UnloadImagePalette(Color *colors)
Rectangle GetImageAlphaBorder(Image image, float threshold)
void ImageClearBackground(Image *dst, Color color)
void ImageDrawPixel(Image *dst, int posX, int posY, Color color)
void ImageDrawPixelV(Image *dst, Vector2 position, Color color)
void ImageDrawLine(Image *dst, int startPosX, int startPosY, int endPosX, int endPosY, Color color)
void ImageDrawLineV(Image *dst, Vector2 start, Vector2 end, Color color)
void ImageDrawCircle(Image *dst, int centerX, int centerY, int radius, Color color)
void ImageDrawCircleV(Image *dst, Vector2 center, int radius, Color color)
void ImageDrawRectangle(Image *dst, int posX, int posY, int width, int height, Color color)
void ImageDrawRectangleV(Image *dst, Vector2 position, Vector2 size, Color color)
void ImageDrawRectangleRec(Image *dst, Rectangle rec, Color color)
void ImageDrawRectangleLines(Image *dst, Rectangle rec, int thick, Color color)
void ImageDraw(Image *dst, Image src, Rectangle srcRec, Rectangle dstRec, Color tint)
void ImageDrawText(Image *dst, const char *text, int posX, int posY, int fontSize, Color color)
void ImageDrawTextEx(Image *dst, Font font, const char *text, Vector2 position, float fontSize, float spacing, Color tint)
Texture2D LoadTexture(const char *fileName)
Texture2D LoadTextureFromImage(Image image)
TextureCubemap LoadTextureCubemap(Image image, int layoutType)
RenderTexture2D LoadRenderTexture(int width, int height)
void UnloadTexture(Texture2D texture)
void UnloadRenderTexture(RenderTexture2D target)
void UpdateTexture(Texture2D texture, const void *pixels)
void UpdateTextureRec(Texture2D texture, Rectangle rec, const void *pixels)
Image GetTextureData(Texture2D texture)
Image GetScreenData(void)
void GenTextureMipmaps(Texture2D *texture)
void SetTextureFilter(Texture2D texture, int filterMode)
void SetTextureWrap(Texture2D texture, int wrapMode)
void DrawTexture(Texture2D texture, int posX, int posY, Color tint)
void DrawTextureV(Texture2D texture, Vector2 position, Color tint)
void DrawTextureEx(Texture2D texture, Vector2 position, float rotation, float scale, Color tint)
void DrawTextureRec(Texture2D texture, Rectangle source, Vector2 position, Color tint)
void DrawTextureQuad(Texture2D texture, Vector2 tiling, Vector2 offset, Rectangle quad, Color tint)
void DrawTextureTiled(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, float scale, Color tint)
void DrawTexturePro(Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, Color tint)
void DrawTextureNPatch(Texture2D texture, NPatchInfo nPatchInfo, Rectangle dest, Vector2 origin, float rotation, Color tint)
Color Fade(Color color, float alpha)
int ColorToInt(Color color)
Vector4 ColorNormalize(Color color)
Color ColorFromNormalized(Vector4 normalized)
Vector3 ColorToHSV(Color color)
Color ColorFromHSV(float hue, float saturation, float value)
Color ColorAlpha(Color color, float alpha)
Color ColorAlphaBlend(Color dst, Color src, Color tint)
Color GetColor(int hexValue)
Color GetPixelColor(void *srcPtr, int format)
void SetPixelColor(void *dstPtr, Color color, int format)
int GetPixelDataSize(int width, int height, int format)
Font GetFontDefault(void)
Font LoadFont(const char *fileName)
Font LoadFontEx(const char *fileName, int fontSize, int *fontChars, int charsCount)
Font LoadFontFromImage(Image image, Color key, int firstChar)
Font LoadFontFromMemory(const char *fileType, const uint8_t *fileData, int dataSize, int fontSize, int *fontChars, int charsCount)
CharInfo *LoadFontData(const uint8_t *fileData, int dataSize, int fontSize, int *fontChars, int charsCount, int type)
Image GenImageFontAtlas(const CharInfo *chars, Rectangle **recs, int charsCount, int fontSize, int padding, int packMethod)
void UnloadFontData(CharInfo *chars, int charsCount)
void UnloadFont(Font font)
void DrawFPS(int posX, int posY)
void DrawText(const char *text, int posX, int posY, int fontSize, Color color)
void DrawTextEx(Font font, const char *text, Vector2 position, float fontSize, float spacing, Color tint)
void DrawTextRec(Font font, const char *text, Rectangle rec, float fontSize, float spacing, bool wordWrap, Color tint)
void DrawTextRecEx(Font font, const char *text, Rectangle rec, float fontSize, float spacing, bool wordWrap, Color tint, int selectStart, int selectLength, Color selectTint, Color selectBackTint)
void DrawTextCodepoint(Font font, int codepoint, Vector2 position, float fontSize, Color tint)
int MeasureText(const char *text, int fontSize)
Vector2 MeasureTextEx(Font font, const char *text, float fontSize, float spacing)
int GetGlyphIndex(Font font, int codepoint)
int TextCopy(char *dst, const char *src)
bool TextIsEqual(const char *text1, const char *text2)
unsigned int TextLength(const char *text)
const char *TextFormat(const char *text, ...)
const char *TextSubtext(const char *text, int position, int length)
char *TextReplace(char *text, const char *replace, const char *by)
char *TextInsert(const char *text, const char *insert, int position)
const char *TextJoin(const char **textList, int count, const char *delimiter)
const char **TextSplit(const char *text, char delimiter, int *count)
void TextAppend(char *text, const char *append, int *position)
int TextFindIndex(const char *text, const char *find)
const char *TextToUpper(const char *text)
const char *TextToLower(const char *text)
const char *TextToPascal(const char *text)
int TextToInteger(const char *text)
char *TextToUtf8(int *codepoints, int length)
int *GetCodepoints(const char *text, int *count)
int GetCodepointsCount(const char *text)
int GetNextCodepoint(const char *text, int *bytesProcessed)
const char *CodepointToUtf8(int codepoint, int *byteLength)
void DrawLine3D(Vector3 startPos, Vector3 endPos, Color color)
void DrawPoint3D(Vector3 position, Color color)
void DrawCircle3D(Vector3 center, float radius, Vector3 rotationAxis, float rotationAngle, Color color)
void DrawTriangle3D(Vector3 v1, Vector3 v2, Vector3 v3, Color color)
void DrawTriangleStrip3D(Vector3 *points, int pointsCount, Color color)
void DrawCube(Vector3 position, float width, float height, float length, Color color)
void DrawCubeV(Vector3 position, Vector3 size, Color color)
void DrawCubeWires(Vector3 position, float width, float height, float length, Color color)
void DrawCubeWiresV(Vector3 position, Vector3 size, Color color)
void DrawCubeTexture(Texture2D texture, Vector3 position, float width, float height, float length, Color color)
void DrawSphere(Vector3 centerPos, float radius, Color color)
void DrawSphereEx(Vector3 centerPos, float radius, int rings, int slices, Color color)
void DrawSphereWires(Vector3 centerPos, float radius, int rings, int slices, Color color)
void DrawCylinder(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color)
void DrawCylinderWires(Vector3 position, float radiusTop, float radiusBottom, float height, int slices, Color color)
void DrawPlane(Vector3 centerPos, Vector2 size, Color color)
void DrawRay(Ray ray, Color color)
void DrawGrid(int slices, float spacing)
void DrawGizmo(Vector3 position)
Model LoadModel(const char *fileName)
Model LoadModelFromMesh(Mesh mesh)
void UnloadModel(Model model)
void UnloadModelKeepMeshes(Model model)
Mesh *LoadMeshes(const char *fileName, int *meshCount)
bool ExportMesh(Mesh mesh, const char *fileName)
void UnloadMesh(Mesh mesh)
Material *LoadMaterials(const char *fileName, int *materialCount)
Material LoadMaterialDefault(void)
void UnloadMaterial(Material material)
void SetMaterialTexture(Material *material, int mapType, Texture2D texture)
void SetModelMeshMaterial(Model *model, int meshId, int materialId)
ModelAnimation *LoadModelAnimations(const char *fileName, int *animsCount)
void UpdateModelAnimation(Model model, ModelAnimation anim, int frame)
void UnloadModelAnimation(ModelAnimation anim)
bool IsModelAnimationValid(Model model, ModelAnimation anim)
Mesh GenMeshPoly(int sides, float radius)
Mesh GenMeshPlane(float width, float length, int resX, int resZ)
Mesh GenMeshCube(float width, float height, float length)
Mesh GenMeshSphere(float radius, int rings, int slices)
Mesh GenMeshHemiSphere(float radius, int rings, int slices)
Mesh GenMeshCylinder(float radius, float height, int slices)
Mesh GenMeshTorus(float radius, float size, int radSeg, int sides)
Mesh GenMeshKnot(float radius, float size, int radSeg, int sides)
Mesh GenMeshHeightmap(Image heightmap, Vector3 size)
Mesh GenMeshCubicmap(Image cubicmap, Vector3 cubeSize)
BoundingBox MeshBoundingBox(Mesh mesh)
void MeshTangents(Mesh *mesh)
void MeshBinormals(Mesh *mesh)
void MeshNormalsSmooth(Mesh *mesh)
void DrawModel(Model model, Vector3 position, float scale, Color tint)
void DrawModelEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint)
void DrawModelWires(Model model, Vector3 position, float scale, Color tint)
void DrawModelWiresEx(Model model, Vector3 position, Vector3 rotationAxis, float rotationAngle, Vector3 scale, Color tint)
void DrawBoundingBox(BoundingBox box, Color color)
void DrawBillboard(Camera camera, Texture2D texture, Vector3 center, float size, Color tint)
void DrawBillboardRec(Camera camera, Texture2D texture, Rectangle source, Vector3 center, float size, Color tint)
bool CheckCollisionSpheres(Vector3 center1, float radius1, Vector3 center2, float radius2)
bool CheckCollisionBoxes(BoundingBox box1, BoundingBox box2)
bool CheckCollisionBoxSphere(BoundingBox box, Vector3 center, float radius)
bool CheckCollisionRaySphere(Ray ray, Vector3 center, float radius)
bool CheckCollisionRaySphereEx(Ray ray, Vector3 center, float radius, Vector3 *collisionPoint)
bool CheckCollisionRayBox(Ray ray, BoundingBox box)
RayHitInfo GetCollisionRayMesh(Ray ray, Mesh mesh, Matrix transform)
RayHitInfo GetCollisionRayModel(Ray ray, Model model)
RayHitInfo GetCollisionRayTriangle(Ray ray, Vector3 p1, Vector3 p2, Vector3 p3)
RayHitInfo GetCollisionRayGround(Ray ray, float groundHeight)
Shader LoadShader(const char *vsFileName, const char *fsFileName)
Shader LoadShaderCode(const char *vsCode, const char *fsCode)
void UnloadShader(Shader shader)
Shader GetShaderDefault(void)
Texture2D GetTextureDefault(void)
Texture2D GetShapesTexture(void)
Rectangle GetShapesTextureRec(void)
void SetShapesTexture(Texture2D texture, Rectangle source)
int GetShaderLocation(Shader shader, const char *uniformName)
int GetShaderLocationAttrib(Shader shader, const char *attribName)
void SetShaderValue(Shader shader, int uniformLoc, const void *value, int uniformType)
void SetShaderValueV(Shader shader, int uniformLoc, const void *value, int uniformType, int count)
void SetShaderValueMatrix(Shader shader, int uniformLoc, Matrix mat)
void SetShaderValueTexture(Shader shader, int uniformLoc, Texture2D texture)
void SetMatrixProjection(Matrix proj)
void SetMatrixModelview(Matrix view)
Matrix GetMatrixModelview(void)
Matrix GetMatrixProjection(void)
TextureCubemap GenTextureCubemap(Shader shader, Texture2D panorama, int size, int format)
TextureCubemap GenTextureIrradiance(Shader shader, TextureCubemap cubemap, int size)
TextureCubemap GenTexturePrefilter(Shader shader, TextureCubemap cubemap, int size)
Texture2D GenTextureBRDF(Shader shader, int size)
void BeginShaderMode(Shader shader)
void EndShaderMode(void)
void BeginBlendMode(int mode)
void EndBlendMode(void)
void InitVrSimulator(void)
void CloseVrSimulator(void)
void UpdateVrTracking(Camera *camera)
void SetVrConfiguration(VrDeviceInfo info, Shader distortion)
bool IsVrSimulatorReady(void)
void ToggleVrMode(void)
void BeginVrDrawing(void)
void EndVrDrawing(void)
void InitAudioDevice(void)
void CloseAudioDevice(void)
bool IsAudioDeviceReady(void)
void SetMasterVolume(float volume)
Wave LoadWave(const char *fileName)
Wave LoadWaveFromMemory(const char *fileType, const uint8_t *fileData, int dataSize)
Sound LoadSound(const char *fileName)
Sound LoadSoundFromWave(Wave wave)
void UpdateSound(Sound sound, const void *data, int samplesCount)
void UnloadWave(Wave wave)
void UnloadSound(Sound sound)
bool ExportWave(Wave wave, const char *fileName)
bool ExportWaveAsCode(Wave wave, const char *fileName)
void PlaySound(Sound sound)
void StopSound(Sound sound)
void PauseSound(Sound sound)
void ResumeSound(Sound sound)
void PlaySoundMulti(Sound sound)
void StopSoundMulti(void)
int GetSoundsPlaying(void)
bool IsSoundPlaying(Sound sound)
void SetSoundVolume(Sound sound, float volume)
void SetSoundPitch(Sound sound, float pitch)
void WaveFormat(Wave *wave, int sampleRate, int sampleSize, int channels)
Wave WaveCopy(Wave wave)
void WaveCrop(Wave *wave, int initSample, int finalSample)
float *LoadWaveSamples(Wave wave)
void UnloadWaveSamples(float *samples)
Music LoadMusicStream(const char *fileName)
void UnloadMusicStream(Music music)
void PlayMusicStream(Music music)
void UpdateMusicStream(Music music)
void StopMusicStream(Music music)
void PauseMusicStream(Music music)
void ResumeMusicStream(Music music)
bool IsMusicPlaying(Music music)
void SetMusicVolume(Music music, float volume)
void SetMusicPitch(Music music, float pitch)
float GetMusicTimeLength(Music music)
float GetMusicTimePlayed(Music music)
AudioStream InitAudioStream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels)
void UpdateAudioStream(AudioStream stream, const void *data, int samplesCount)
void CloseAudioStream(AudioStream stream)
bool IsAudioStreamProcessed(AudioStream stream)
void PlayAudioStream(AudioStream stream)
void PauseAudioStream(AudioStream stream)
void ResumeAudioStream(AudioStream stream)
bool IsAudioStreamPlaying(AudioStream stream)
void StopAudioStream(AudioStream stream)
void SetAudioStreamVolume(AudioStream stream, float volume)
void SetAudioStreamPitch(AudioStream stream, float pitch)
void SetAudioStreamBufferSizeDefault(int size)
