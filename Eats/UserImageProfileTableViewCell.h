//
//  UserImageProfileTableViewCell.h
//  Appetite
//
//  Created by mjhowell on 2/6/15.
//  Copyright (c) 2015 Guru. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>


@interface UserImageProfileTableViewCell : UITableViewCell

@property (strong, nonatomic) IBOutlet UIImageView *userProfileImage;
@property (strong, nonatomic) IBOutlet UILabel *userProfileIdentifier;
@property (strong, nonatomic) IBOutlet FBProfilePictureView *FBuserProfilePicture;


@end
