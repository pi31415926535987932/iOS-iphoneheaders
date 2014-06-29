/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:44 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VGLMesh.h>

@class VGLTexture;

@interface VGLSingleTexturedAndLitMesh : VGLMesh {

	VGLTexture* _texture;

}

@property (nonatomic,retain) VGLTexture * texture;              //@synthesize texture=_texture - In the implementation block
-(void)dealloc;
-(id)init;
-(id)texture;
-(void)drawTrianglesWithContext:(id)arg1 ;
-(void)setTexture:(id)arg1 ;
-(id)initWithVertices:(const SCD_Struct_VG163*)arg1 vertexCount:(int)arg2 indices:(const unsigned short*)arg3 indexCount:(int)arg4 ;
-(id)initFromAsciiVertexFile:(id)arg1 indexFile:(id)arg2 ;
@end
