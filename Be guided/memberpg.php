<!DOCTYPE html>
<html lang="">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, target-densitydpi=device-dpi"/>
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Document</title>
        <link href='http://fonts.googleapis.com/css?family=Titillium+Web:400,300,600' rel='stylesheet' type='text/css'>
        <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/normalize/5.0.0/normalize.min.css">
        <!-- Custom Fonts -->
        <link href="vendor/font-awesome/css/font-awesome.min.css" rel="stylesheet" type="text/css">
        <link href="https://fonts.googleapis.com/css?family=Lora:400,700,400italic,700italic" rel="stylesheet" type="text/css">
        <link href="https://fonts.googleapis.com/css?family=Montserrat:400,700" rel="stylesheet" type="text/css">
        <!-- Theme CSS -->
        <link href="css/inscon.css" rel="stylesheet">

        <!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries -->
        <!-- WARNING: Respond.js doesn't work if you view the page via file:// -->
        <!--[if lt IE 9]>
<script src="https://oss.maxcdn.com/libs/html5shiv/3.7.0/html5shiv.js"></script>
<script src="https://oss.maxcdn.com/libs/respond.js/1.4.2/respond.min.js"></script>
<![endif]-->
    </head>
    <body class="member">
        <div class="form">
            <ul class="tab-group">
                <li class="tab active"><a href="#signup">S'inscrire</a></li>
                <li class="tab"><a href="#login">Déjà membre ?</a></li>
            </ul>

            <div class="tab-content">
                <div id="signup">   
                    <h1>Devenez membre en vous inscrivant</h1>

                    <form action="#" method="post">

                        <div class="top-row">
                            <div class="field-wrap">
                                <label>
                                    Nom<span class="req">*</span>
                                </label>
                                <input type="text" required autocomplete="off" />
                            </div>

                            <div class="field-wrap">
                                <label>
                                    Prénom<span class="req">*</span>
                                </label>
                                <input type="text"required autocomplete="off"/>
                            </div>
                        </div>

                        <div class="field-wrap">
                            <label>
                                Adresse e-mail<span class="req">*</span>
                            </label>
                            <input type="email"required autocomplete="off"/>
                        </div>
                        <div class="field-wrap">
                            <label>
                                Numéro de téléphone<span class="req">*</span>
                            </label>
                            <input type="tel"required autocomplete="off"/>
                        </div>

                        <div class="field-wrap">
                            <label>
                                Mot de passe<span class="req">*</span>
                            </label>
                            <input type="password"required autocomplete="off"/>
                        </div>

                        <div class="field-wrap">
                            <label>
                                Confirmez votre mot de passe<span class="req">*</span>
                            </label>
                            <input type="password"required autocomplete="off"/>
                        </div>
                        <div class="field-wrap">
                            <label>
                                Ville<span class="req">*</span>
                            </label>
                            <input type="text"required autocomplete="off"/>
                        </div>

                        <button type="submit" class="button button-block"/>Inscription</button>

                    </form> <br>
                <a href="index.php" style="float:right;"><i class="fa fa-home" aria-hidden="true"></i> Acceuil</a>

            </div>

            <div id="login">   
                <h1>Bienvenue ! <br> Accédez à votre compte</h1>

                <form action="/" method="post">

                    <div class="field-wrap">
                        <label>
                            Adresse e-mail<span class="req">*</span>
                        </label>
                        <input type="email"required autocomplete="off"/>
                    </div>

                    <div class="field-wrap">
                        <label>
                            Mot de passe<span class="req">*</span>
                        </label>
                        <input type="password"required autocomplete="off"/>
                    </div>

                    <p class="forgot"><a href="#">Mot de passe oublé?</a></p>

                    <button class="button button-block"/>Connexion</button>

                </form> <br>
            <a href="index.php" style="float:right;"><i class="fa fa-home" aria-hidden="true"></i> Acceuil</a>

        </div>

        </div><!-- tab-content -->

    </div> <!-- /form -->

<script src='http://cdnjs.cloudflare.com/ajax/libs/jquery/2.1.3/jquery.min.js'></script>

<script src="js/inscon.js"></script>

</body>
</html>