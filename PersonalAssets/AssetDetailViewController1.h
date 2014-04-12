//
//  AssetDetailViewController.h
//  JiaoTongBu
//
//  Created by zhouyuan on 14-4-11.
//  Copyright (c) 2014年 zhouyuan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AssetDetailViewController : UIViewController <UIActionSheetDelegate,UIImagePickerControllerDelegate,UINavigationControllerDelegate>
{
    //下拉菜单
    const UIActionSheet *myActionSheet;
    //图片2进制路径
    NSString* filePath;
}
@property (strong, nonatomic) IBOutlet UIButton *assetImgButton;

-(IBAction)imgClick:(id)sender;

@end
